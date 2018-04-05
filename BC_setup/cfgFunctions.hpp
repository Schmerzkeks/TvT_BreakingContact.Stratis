class BC_setup {

  class definitions {
    file = BC_setup\definitions;

        class configureBluforStartVehicle;
        class configureOpforStartVehicle;
  };

	class client {
		file = BC_setup\functions\client;

        class addBriefing;
        class addInteractions;
        class chooseSpawn;
        class createStartMarker;
        class disableSpawn;
        class establishingShot;
        class initialSpawnClient;
        class isOnWater;
        class teleportPlayer;
	};

  class server {
		file = BC_setup\functions\server;

        class clearInventory;
        class defineWoodland { preInit = 1; };
        class findRandomPos;
        class findSpawnPosition;
        class getIslandCfgEntry { preInit = 1; };
        class getMapSize;
        class getSlope;
        class initialSpawnServer;
        class isInsideMap;
        class publishBluforTeleportTarget;
        class publishOpforTeleportTarget;
        class showLeaderInformation;
        class spawnStartVehicle;
        class teleportAI;
	};
};
