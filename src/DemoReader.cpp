#include "DemoReader.hpp"
#include "Utility.hpp"

#include <algorithm>
#include <iostream>
#include <iterator>

namespace Iswenzz
{
	DemoReader::DemoReader(std::string filePath)
		: DemoFile(std::make_unique<Demo>(filePath)), FilePath(filePath) { }

	bool DemoReader::Next()
	{
		// Update previous data for comparisons
		PreviousSnapshot = DemoFile->CurrentSnapshot;
		PreviousClients = DemoFile->ParseClients;
		PreviousEntities = DemoFile->ParseEntities;
		PreviousFrames = DemoFile->Frames;

		// Parse demo and update reader fields
		if (DemoFile->Next())
		{
			Snapshot = DemoFile->CurrentSnapshot;

			UpdateClients();
			UpdateEntities();

			return true;
		}
		return false;
	}

	void DemoReader::Close()
	{
		DemoFile->Close();
	}

	float DemoReader::GetTime()
	{
		return (DemoFile->CurrentFrameTime - DemoFile->StartFrameTime) / 50.0f / 20.0f;
	}

	int DemoReader::GetServerTime()
	{
		return DemoFile->CurrentFrameTime;
	}

	clientSnapshot_t DemoReader::GetCurrentSnapshot()
	{
		return DemoFile->CurrentSnapshot;
	}

	archivedFrame_t DemoReader::GetCurrentFrame()
	{
		std::vector<archivedFrame_t> orderedFrames = Utility::GetArrayDifference<archivedFrame_t>(
			DemoFile->Frames, PreviousFrames,
			[](const archivedFrame_t& a, const archivedFrame_t& b) { return a.commandTime == b.commandTime; });
		return orderedFrames.size() > 0 ? orderedFrames.back() : archivedFrame_t();
	}

	std::vector<clientState_t> DemoReader::GetLastUpdatedClients()
	{
		return Utility::GetArrayDifference<clientState_t>(DemoFile->ParseClients, PreviousClients,
			[](const clientState_t& a, const clientState_t& b) { return a.clientIndex == b.clientIndex; });
	}

	std::vector<entityState_t> DemoReader::GetLastUpdatedEntities()
	{
		return Utility::GetArrayDifference<entityState_t>(DemoFile->ParseEntities, PreviousEntities,
			[](const entityState_t& a, const entityState_t& b) { return a.number == b.number; });
	}

	void DemoReader::UpdateClients()
	{
		for (const clientState_t& client : GetLastUpdatedClients())
			Clients[client.clientIndex] = client;
	}

	void DemoReader::UpdateEntities()
	{
		for (const entityState_t& entity : GetLastUpdatedEntities())
			Entities[entity.number] = entity;
	}
}
