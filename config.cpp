class CfgPatches
{
	class AmmoStacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base
	{
		lootCategory="Ammo";
		rotationFlags=2;
		itemSize[]={1,1};
		iconCartridge=0;
		iconType=0;
		ammo="";
		spawnDamageRange[]={0,0.60000002};
		destroyOnEmpty=1;
		varQuantityDestroyOnMin=1;
		canBeSplit=1;
		simpleHeap=1;
		soundUse="craft_rounds";
		emptySound="craft_rounds";
	};
	
	class Ammo_45ACP: Ammunition_Base
	{
		displayName=".45 ACP Cartridges";
		descriptionShort="A handful of 185 Grain, high-pressure, military grade .45 Automatic-Colt-Pistol rounds. These rounds were originally developed in the United States in 1904 as an alternative to the small, low-stopping-power cartridges popular at the time. The round was quickly adopted by the US military, and has served them - and every nation influenced by them - honorably for nearly 70 years.";		
	};
	
	class Ammo_9x19: Ammunition_Base
	{
		displayName="9x19mm Parabellum-M50 Cartridges";
		descriptionShort="A handful of pistol cartridges, commonly known as 9mm Parabellum or 9mm Luger. These 115 Grain, high-pressure, jacketed-ball cartridges are used extensively by militaries across the world - but particularly by the Germans. The 9mm Parabellum cartridge was originally developed in the early 1900s for the Kaiser, amd is today considered to be one of the most succesful pistol cartridges ever developed. The cartridges you hold in your hand were made in America, most likely for the JAND's military.";		
	};
	
	class Ammo_762x54: Ammunition_Base
	{
		displayName="7.62x54mmR M40.B Cartridges";
		descriptionShort="A handful of Russian-made 7.62x54mm Rimmed light-weight cartridges. 'M40.B' cartridges feature light 150-grain boat-tailed bullets with mild steel cores, designed to grant riflemen enhanced accuracy. They were the most common cartridge in the Soviet Red Army during their ill-fated struggle against Germany.";	
	};
	
	class Ammo_762x54Tracer: Ammunition_Base
	{
		displayName="7.62x54mmR M40.T Cartridges";
		descriptionShort="A handful of Russian-made 7.62x54mm Rimmed light-weight cartridges. 'M40.T' cartridges feature light 150-grain boat-tailed bullets with mild steel cores and a barium-salt tracer compound on their base. This pyrotechnic mixture ignites when the cartridge is fired, producing the tracer effect. They were the most common cartridge in the Soviet Red Army during their ill-fated struggle against Germany.";	
	};
	
	class Ammo_762x39: Ammunition_Base
	{
		displayName="7.62x39mm M43.B Cartridges";
		descriptionShort="A handful of Russian-made 7.62x39mm intermediate-size cartridges. 'M43.B' cartridges feature light-weight, 123 Grain boat-tailed bullets with a copper-plated steel jacket and hefty steel core. They are famed for their extremely straight flight trajectory... even after hitting someone. They were developed by the Old Soviet in 1943, by direct order of Leon Trotsky, who had come to believe that the older, larger 7.62x54mmR cartridge was had become impractical for modern warfare. These cartridges were first extensively used during the November Offensive, by Red Army shock units.";
	};
	
	class Ammo_762x39Tracer: Ammunition_Base
	{
		displayName="7.62x39mm M43.T Cartridges";
		descriptionShort="A handful of Russian-made 7.62x39mm intermediate-size cartridges. 'M43.B' cartridges feature light-weight, 123 Grain boat-tailed bullets, a copper-plated steel jacket, hefty steel core, and a barium-salt tracer compound on their base. They were developed by the Old Soviet in 1943, by direct order of Leon Trotsky, who had come to believe that the older, larger 7.62x54mmR cartridge was had become impractical for modern warfare. These cartridges were first extensively used during the November Offensive, by Red Army shock units.";
	};
	
	class Ammo_22: Ammunition_Base
	{
		displayName=".22 Long Rifle Cartridges";
		descriptionShort="A handful of .22 Long Rifle cartridges. .22LR has been the standard anti-varmint cartridge since the turn of the century. It is even rumored to be used by some military units who need particularly quiet subsonic ammunition.";		
	};
	
	class Ammo_12gaPellets: Ammunition_Base
	{
		displayName="12 Guage 00-Buckshot Shells";
		descriptionShort="A handful of 12 Guage shotshells, filled with 9 .33-inch lead pellets. Shotshells like these are mass-manufactured across America, and are considered the go-to thing for hunting and earnest self-defense.";		
	};
	
	class Ammo_12gaSlug: Ammunition_Base
	{
		displayName="12 Guage Full-Bore Slugs";
		descriptionShort="A handful of Foster-type shotgun slugs. Unlike a Buckshot shell, slug-shells fire a single gargantuan hunk of lead. The slug itself is rifled, allowing it to remain more accurate at longer ranges, despite being fired from a smooth-bore shotgun. Shotshells like these are mass-manufactured across America, and are considered the go-to thing for hunting and earnest self-defense.";		
	};
	
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		displayName="12 Guage Rubber Fin-Rockets";
		descriptionShort="A handful of less-lethal shotgun slugs. They fire a finned rubber projectile - which resembles a rocket - at a low velocity. It is designed to incapacitate a target, rather than outright kill them.";		
	};
	
	class Ammo_357: Ammunition_Base
	{
		displayName=".357 S&W Magnum Cartridges";
		descriptionShort="A handful of American-made large pistol cartridges. Designed by Smith and Wesson in 1935, .357 Magnum is today one of America's most popular civilian cartridges. They were originally developed to provide Law Enforcement with a 'hotter' round to punch holes through bootlegger's car doors, and early body armor. These cartridges feature a 130 Grain, copper-jacketed bullets. Although primarily popular in the former-USA, they are becoming increasingly common in Russia.";		
	};

	class Ammo_308Win: Ammunition_Base
	{
		displayName=".30-52 Fayetteville Cartridges";
		descriptionShort="A handful of .30 caliber cartridges, suitable for a wide variety of rifles. This particular chambering was developed in 1952 by the United States' Fayetteville Armory. It was developed as a lighter alternative to the older .30-06 cartridge, and is ideal for automatic - but still high-powered, long range - weapons. These are usable in all weapons marked as taking 308 Winchester... whatever that is.";		
	};
	
	class Ammo_308WinTracer: Ammunition_Base
	{
		displayName=".30-52-T Fayetteville Tracer Cartridges";
		descriptionShort="A handful of .30 caliber cartridges, suitable for a wide variety of rifles. This particular chambering was developed in 1952 by the United States' Fayetteville Armory. It was developed as a lighter alternative to the older .30-06 cartridge, and is ideal for automatic - but still high-powered, long range - weapons. These particular cartridges have strontium-mangesium tracers on the base of their bullets. These are usable in all weapons marked as taking 308 Winchester... whatever that is.";		
	};
	
};
