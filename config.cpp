class CfgPatches
{
    class ld3k_jca_m4a1_m4a4_300blk_compat_ace3
    {
        requiredAddons[]=
        {
            "Weapons_F_JCA_IA",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_M4A4",
            "Weapons_F_JCA_IA_Accessories"
        };
        requiredversion=0.1;
        units[]={};
        weapons[]=
        {
            "JCA_arifle_M4A1_300BLK_black_F",
            "JCA_arifle_M4A1_300BLK_GL_black_F",
            "JCA_arifle_M4A1_300BLK_short_black_F",
            "JCA_arifle_M4A1_300BLK_sand_F",
            "JCA_arifle_M4A1_300BLK_GL_sand_F",
            "JCA_arifle_M4A1_300BLK_short_sand_F",
            "JCA_arifle_M4A1_300BLK_olive_F",
            "JCA_arifle_M4A1_300BLK_GL_olive_F",
            "JCA_arifle_M4A1_300BLK_short_olive_F",
            "JCA_arifle_M4A4_300BLK_AFG_black_F",
            "JCA_arifle_M4A4_300BLK_VFG_black_F",
            "JCA_arifle_M4A4_300BLK_GL_black_F",
            "JCA_arifle_M4A4_300BLK_AFG_sand_F",
            "JCA_arifle_M4A4_300BLK_VFG_sand_F",
            "JCA_arifle_M4A4_300BLK_GL_sand_F",
            "JCA_arifle_M4A4_300BLK_AFG_olive_F",
            "JCA_arifle_M4A4_300BLK_VFG_olive_F",
            "JCA_arifle_M4A4_300BLK_GL_olive_F"
        };
    };
};
class asdg_MuzzleSlot_762;
class CfgAmmo
{
    class BulletBase;
    /*class B_762x51_Ball: BulletBase // official BI tool All-in-one Config Arma3 2.19.152606 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        hit=11.6;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_762";
        visibleFire=3;
        audibleFire=45;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cost=1.2;
        airLock=1;
        typicalSpeed=800;
        caliber=1.6;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=0.6;
        tracerStartTime=0.0075;
        tracerEndTime=5;
        airFriction=-0.001;
        class CamShakeExplode
        {
            power=2.82843;
            duration=0.6;
            frequency=20;
            distance=8.48528;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class B_762x39_Ball_F: BulletBase
    {
        airLock=1;
        hit=11;
        indirectHit=0;
        indirectHitRange=0;
        typicalSpeed=730;
        airFriction=-0.0016;
        caliber=1.2;
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        tracerScale=1;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cartridge="FxCartridge_762x39";
    };*/
    class ld3k_B_762x35_Ball_110gr: BulletBase // Hornady Law Enforcement .300 Blackout 110gr TAP Urban according to HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_bulletLength=29.97; // 1.180" https://static.hornady.media/presscenter/docs/1410998618-300-Blackout-110gr-TAP-Urban.pdf
        ACE_bulletMass=7.128; // 110gr
        // ACE_transonicStabilityCoef=0.5; // ACE3 default value https://github.com/acemod/ACE3/blob/24e57825f7e75822e936282b36a3929bae189338/addons/advanced_ballistics/functions/fnc_readAmmoDataFromConfig.sqf#L40
        // ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-3.74,-3.64,-3.32,-2.8,-2.08,-1.14,0,1.36,2.92,4.68,6.66}; // Same curve default ACE_ammoTempMuzzleVelocityShifts /5. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.290}; // https://www.hornadyle.com/rifle-ammunition/110-gr-tap-urban-300-blackout#!/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // https://www.hornady.com
        ACE_dragModel=1;
        ACE_barrelLengths[]={139.7,171.45,203.2,228.6,266.7,406.4}; // 5.5, 6.75, 8, 9, 10.5, 16" barrel lengths, Hornady Law Enforcement .300 Blackout data https://www.hornadyle.com/
        ACE_muzzleVelocities[]={608,640,666,684,705,724}; // 702m/s 10.3", 719m/s 14.5" ICAO conditions (15°C, 1013.25hPa, 0%), 724m/s (2375fps) 16" Hornady Law Enforcement .300 Blackout data https://www.hornadyle.com/
        hit=10.9; // Polymer tipped frangible, 1868 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_556"; // B_762x51_Ball FxCartridge_762
        visibleFire=3;
        audibleFire=45;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cost=1.2;
        airLock=1;
        typicalSpeed=724; // B_762x51_Ball 800, 1868 Joules
        caliber=1.28; // Polymer tipped frangible, B_762x51_Ball 1.6
        // .300 Blackout 110gr TAP Urban, bare gelatin total penetration 12.75" velocity 2175fps, "meat.bisurf" (bulletPenetrability 350): caliber ~1.4
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1; // B_556x45_Ball, B_65x39_Caseless, B_762x39_Ball_F, B_762x51_Ball 0.6
        tracerStartTime=0.18; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 140m 0.18s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=1.87; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 900m 1.87s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=0; // B_762x51_Ball w/o nvgOnly
        airFriction=-0.001468; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.82843;
            duration=0.6;
            frequency=20;
            distance=8.48528;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_762x35_Ball_220gr: ld3k_B_762x35_Ball_110gr // SWISS P .300 BLK Subsonic SX 14.3g 220gr according to HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
    {
        ACE_bulletLength=40.1;
        ACE_bulletMass=14.256; // 220gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts /10. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.417}; // https://static1.squarespace.com/static/665d8685c4bf3a55ab1aae71/t/67a38010da743b108b36004f/1738768401079/Duty_factsheet_300+BLK+Subsonic+SX_hr.pdf
        ACE_standardAtmosphere="ICAO"; // https://swiss-p.com
        ACE_muzzleVelocities[]={276,290,302,310,319,328}; // 318m/s 10.3", 326m/s 14.5" ICAO conditions (15°C, 1013.25hPa, 0%), 310m/s 9" (320±10m/s) https://static1.squarespace.com/static/665d8685c4bf3a55ab1aae71/t/67a38010da743b108b36004f/1738768401079/Duty_factsheet_300+BLK+Subsonic+SX_hr.pdf
        hit=9.2; // HPBT Hollow Point Boat Tail, 767 Joules
        visibleFire=1; // B_127x54_Ball, B_762x51_Ball 3
        audibleFire=5; // B_127x54_Ball, B_762x51_Ball 45
        dangerRadiusBulletClose=4; // B_127x54_Ball, B_762x51_Ball 8
        suppressionRadiusBulletClose=2; // B_127x54_Ball, B_762x51_Ball 6
        typicalSpeed=328; // B_762x51_Ball 800, 767 Joules
        caliber=0.96; // HPBT Hollow Point Boat Tail
        // .300 Blackout 190gr SUB-X TAP, bare gelatin total penetration 17" velocity 998ps, "meat.bisurf" (bulletPenetrability 350): caliber ~4
        airFriction=-0.00062148; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.23607; // B_127x54_Ball, B_762x51_Ball 2.8284299
            duration=0.4; // B_127x54_Ball, B_762x51_Ball 0.6
            frequency=20; // B_127x54_Ball ,B_762x51_Ball 20
            distance=6.7082; // B_127x54_Ball, B_762x51_Ball 8.48528
        };
    };
    class ld3k_B_762x35_Ball_150gr: ld3k_B_762x35_Ball_110gr // Federal .300 Blackout 150gr Full Metal Jacket Boat-Tail
    {
        ACE_bulletLength=28.22; // 1.111" https://www.federalpremium.com/rifle/american-eagle/american-eagle-rifle/11-AE300BLK1.html
        ACE_bulletMass=9.72; // 110gr
        ACE_ammoTempMuzzleVelocityShifts[]={-3.74,-3.64,-3.32,-2.8,-2.08,-1.14,0,1.36,2.92,4.68,6.66}; // Same curve default ACE_ammoTempMuzzleVelocityShifts /5. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.406}; // ASM G1 0.406 converted to ICAO G1 0.401 (0.400655) for airFriction calculation https://www.federalpremium.com/rifle/american-eagle/american-eagle-rifle/11-AE300BLK1.html
        ACE_standardAtmosphere="ASM"; // https://www.federalpremium.com
        ACE_muzzleVelocities[]={486,512,532,547,564,579}; // 562m/s 10.3", 575m/s 14.5" ASM conditions (15°C, 999.916hPa, 78%), 579m/s (1900fps) 16" American Eagle Rifle .300 Blackout data https://www.federalpremium.com
        hit=8; // Full Metal Jacket Boat-Tail, 1630 Joules
        typicalSpeed=579; // B_762x51_Ball 800, 1630 Joules
        caliber=1.4; // Full Metal Jacket Boat-Tail, B_762x51_Ball 1.6
        airFriction=-0.00110997; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_762x35_Ball_150gr_Tracer_Red: ld3k_B_762x35_Ball_150gr
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_762x35_Ball_150gr_Green: ld3k_B_762x35_Ball_150gr_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class ld3k_B_762x35_Ball_150gr_Tracer_Yellow: ld3k_B_762x35_Ball_150gr_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer: ld3k_B_762x35_Ball_150gr
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1, B_65x39_Caseless 1, B_762x39_Ball_F 1, B_762x51_Ball 0.6
        tracerStartTime=0.02; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 13m 0.02s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=3.03; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 1250m 3.03s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=1;
    };
};
class CfgMagazines
{
    class CA_Magazine;
    class JCA_30Rnd_556x45_PMAG;
    class JCA_30Rnd_556x45_sand_PMAG;
    class JCA_30Rnd_556x45_EMAG;
    class JCA_30Rnd_556x45_sand_EMAG;
    class ld3k_30Rnd_300BLK_110gr_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr PMAG";
        ammo="ld3k_B_762x35_Ball_110gr";
        mass=9.2; // 15.7 Polymer magazine 30 rounds (empty) 140g + 30x 19g (110gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=724; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .300 Blackout<br />Rounds: 30<br />Used in: .300 BLK STANAG Rifles";
        displaynameshort="110gr Frangible";
    };
    class ld3k_30Rnd_300BLK_220gr_PMAG: ld3k_30Rnd_300BLK_110gr_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 220gr PMAG";
        ammo="ld3k_B_762x35_Ball_220gr";
        mass=10.5; // 17.8 Polymer magazine 30 rounds (empty) 140g + 30x 22.3g (220gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=328; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="220gr Subsonic";
    };
    class ld3k_30Rnd_300BLK_150gr_PMAG: ld3k_30Rnd_300BLK_110gr_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr PMAG";
        ammo="ld3k_B_762x35_Ball_150gr";
        mass=9.7; // 16.6 Polymer magazine 30 rounds (empty) 140g + 30x 20.5g (150gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=579; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="150gr FMJ";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG: ld3k_30Rnd_300BLK_150gr_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (Red) PMAG";
        ammo="ld3k_B_762x35_Ball_150gr_Tracer_Red";
        tracersEvery=1;
        displaynameshort="150gr Tracer";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG: ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (IR) PMAG";
        ammo="ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer";
        displaynameshort="150gr Tracer IR";
    };
    class ld3k_30Rnd_300BLK_110gr_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Sand PMAG";
        ammo="ld3k_B_762x35_Ball_110gr";
        mass=9.2; // 15.7 Polymer magazine 30 rounds (empty) 140g + 30x 19g (110gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=724; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .300 Blackout<br />Rounds: 30<br />Used in: .300 BLK STANAG Rifles";
        displaynameshort="110gr Frangible";
    };
    class ld3k_30Rnd_300BLK_220gr_sand_PMAG: ld3k_30Rnd_300BLK_110gr_sand_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 220gr Sand PMAG";
        ammo="ld3k_B_762x35_Ball_220gr";
        mass=10.5; // 17.8 Polymer magazine 30 rounds (empty) 140g + 30x 22.3g (220gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=328; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="220gr Subsonic";
    };
    class ld3k_30Rnd_300BLK_150gr_sand_PMAG: ld3k_30Rnd_300BLK_110gr_sand_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Sand PMAG";
        ammo="ld3k_B_762x35_Ball_150gr";
        mass=9.7; // 16.6 Polymer magazine 30 rounds (empty) 140g + 30x 20.5g (150gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=579; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="150gr FMJ";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG: ld3k_30Rnd_300BLK_150gr_sand_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (Red) Sand PMAG";
        ammo="ld3k_B_762x35_Ball_150gr_Tracer_Red";
        tracersEvery=1;
        displaynameshort="150gr Tracer";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG: ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (IR) Sand PMAG";
        ammo="ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer";
        displaynameshort="150gr Tracer IR";
    };
    class ld3k_30Rnd_300BLK_110gr_EMAG: JCA_30Rnd_556x45_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr EMAG";
        ammo="ld3k_B_762x35_Ball_110gr";
        mass=9.4; // 16 HK Gen3 magazine 30 rounds (empty) 158g + 30x 19g (110gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=724; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .300 Blackout<br />Rounds: 30<br />Used in: .300 BLK STANAG Rifles";
        displaynameshort="110gr Frangible";
    };
    class ld3k_30Rnd_300BLK_220gr_EMAG: ld3k_30Rnd_300BLK_110gr_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 220gr EMAG";
        ammo="ld3k_B_762x35_Ball_220gr";
        mass=10.7; // 18.2 HK Gen3 magazine 30 rounds (empty) 158g + 30x 22.3g (220gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=328; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="220gr Subsonic";
    };
    class ld3k_30Rnd_300BLK_150gr_EMAG: ld3k_30Rnd_300BLK_110gr_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr EMAG";
        ammo="ld3k_B_762x35_Ball_150gr";
        mass=10; // 17 HK Gen3 magazine 30 rounds (empty) 158g + 30x 20.5g (150gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=579; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="150gr FMJ";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG: ld3k_30Rnd_300BLK_150gr_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (Red) EMAG";
        ammo="ld3k_B_762x35_Ball_150gr_Tracer_Red";
        tracersEvery=1;
        displaynameshort="150gr Tracer";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG: ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (IR) EMAG";
        ammo="ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer";
        displaynameshort="150gr Tracer IR";
    };
    class ld3k_30Rnd_300BLK_110gr_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Sand EMAG";
        ammo="ld3k_B_762x35_Ball_110gr";
        mass=9.4; // 16 HK Gen3 magazine 30 rounds (empty) 158g + 30x 19g (110gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=724; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .300 Blackout<br />Rounds: 30<br />Used in: .300 BLK STANAG Rifles";
        displaynameshort="110gr Frangible";
    };
    class ld3k_30Rnd_300BLK_220gr_sand_EMAG: ld3k_30Rnd_300BLK_110gr_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 220gr Sand EMAG";
        ammo="ld3k_B_762x35_Ball_220gr";
        mass=10.7; // 18.2 HK Gen3 magazine 30 rounds (empty) 158g + 30x 22.3g (220gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=328; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="220gr Subsonic";
    };
    class ld3k_30Rnd_300BLK_150gr_sand_EMAG: ld3k_30Rnd_300BLK_110gr_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Sand EMAG";
        ammo="ld3k_B_762x35_Ball_150gr";
        mass=10; // 17 HK Gen3 magazine 30 rounds (empty) 158g + 30x 20.5g (150gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=579; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="150gr FMJ";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG: ld3k_30Rnd_300BLK_150gr_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (Red) Sand EMAG";
        ammo="ld3k_B_762x35_Ball_150gr_Tracer_Red";
        tracersEvery=1;
        displaynameshort="150gr Tracer";
    };
    class ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG: ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (IR) Sand EMAG";
        ammo="ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer";
        displaynameshort="150gr Tracer IR";
    };
    class ld3k_30Rnd_300BLK_110gr_Stanag: CA_Magazine
    {
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        author="Laid3acK";
        scope=2;
        displayName=".300 BLK 30Rnd 110gr Mag";
        ammo="ld3k_B_762x35_Ball_110gr";
        count=30;
        mass=10.6; // 18.1 Steel magazine 30 rounds (empty) 250g + 30x 19g (110gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=724; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: .300 Blackout<br />Rounds: 30<br />Used in: .300 BLK STANAG Rifles";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
        displaynameshort="110gr Frangible";
    };
    class ld3k_30Rnd_300BLK_220gr_Stanag: ld3k_30Rnd_300BLK_110gr_Stanag
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 220gr Mag";
        ammo="ld3k_B_762x35_Ball_220gr";
        mass=11.9; // 20.3 Steel magazine 30 rounds (empty) 250g + 30x 22.3g (220gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=328; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="220gr Subsonic";
    };
    class ld3k_30Rnd_300BLK_150gr_Stanag: ld3k_30Rnd_300BLK_110gr_Stanag
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Mag";
        ammo="ld3k_B_762x35_Ball_150gr";
        mass=11.2; // 19.1 Steel magazine 30 rounds (empty) 250g + 30x 20.5g (150gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=579; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="150gr FMJ";
    };
    class ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red: ld3k_30Rnd_300BLK_150gr_Stanag
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (Red) Mag";
        ammo="ld3k_B_762x35_Ball_150gr_Tracer_Red";
        tracersEvery=1;
        displaynameshort="150gr Tracer";
    };
    class ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR: ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (IR) Mag";
        ammo="ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer";
        displaynameshort="150gr Tracer IR";
    };
    class ld3k_30Rnd_300BLK_110gr_Stanag_Sand: ld3k_30Rnd_300BLK_110gr_Stanag
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Sand Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_sand_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_SMAG_sand_CO.paa"
        };
    };
    class ld3k_30Rnd_300BLK_220gr_Stanag_Sand: ld3k_30Rnd_300BLK_110gr_Stanag_Sand
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 220gr Sand Mag";
        ammo="ld3k_B_762x35_Ball_220gr";
        mass=11.9; // 20.3 Steel magazine 30 rounds (empty) 250g + 30x 22.3g (220gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=328; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="220gr Subsonic";
    };
    class ld3k_30Rnd_300BLK_150gr_Stanag_Sand: ld3k_30Rnd_300BLK_110gr_Stanag_Sand
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Sand Mag";
        ammo="ld3k_B_762x35_Ball_150gr";
        mass=11.2; // 19.1 Steel magazine 30 rounds (empty) 250g + 30x 20.5g (150gr cartridge weight), 30Rnd_556x45_Stanag 8
        initSpeed=579; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="150gr FMJ";
    };
    class ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red: ld3k_30Rnd_300BLK_150gr_Stanag_Sand
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (Red) Sand Mag";
        ammo="ld3k_B_762x35_Ball_150gr_Tracer_Red";
        tracersEvery=1;
        displaynameshort="150gr Tracer";
    };
    class ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR: ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 150gr Tracer (IR) Sand Mag";
        ammo="ld3k_B_762x35_Ball_150gr_IR_Dim_Tracer";
        displaynameshort="150gr Tracer IR";
    };
};
class CfgMagazineWells
{
    class STANAG_300 // vanilla magazineWell STANAG_556x45, MAR10_338, M320_408, SPMG_338
    {
        ld3k_Magazines[]= // Weapon initSpeed -1 ACE_barrelLength 406.4mm (SAAMI Test Barrel 16"): 724, 328, 579m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to ld3k_30Rnd_300BLK magazines initSpeed
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
    };
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class JCA_arifle_M4A1_base_F;
    class JCA_arifle_M4A1_GL_base_F;
    class JCA_arifle_M4A1_short_base_F;
    class JCA_arifle_M4A4_base_F;
    class JCA_arifle_M4A4_AFG_base_F;
    class JCA_arifle_M4A4_VFG_base_F;
    class JCA_arifle_M4A4_GL_base_F;
    class JCA_arifle_M4A1_black_F: JCA_arifle_M4A1_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_GL_black_F: JCA_arifle_M4A1_GL_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_short_black_F: JCA_arifle_M4A1_short_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_olive_F: JCA_arifle_M4A1_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_GL_olive_F: JCA_arifle_M4A1_GL_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_short_olive_F: JCA_arifle_M4A1_short_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_AFG_black_F: JCA_arifle_M4A4_AFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_VFG_black_F: JCA_arifle_M4A4_VFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_GL_black_F: JCA_arifle_M4A4_GL_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_AFG_sand_F: JCA_arifle_M4A4_AFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_VFG_sand_F: JCA_arifle_M4A4_VFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_GL_sand_F: JCA_arifle_M4A4_GL_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_AFG_olive_F: JCA_arifle_M4A4_AFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_VFG_olive_F: JCA_arifle_M4A4_VFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A4_GL_olive_F: JCA_arifle_M4A4_GL_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_M4A1_300BLK_black_F: JCA_arifle_M4A1_black_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        // ACE_twistDirection=1 // ACE3 default value https://github.com/acemod/ACE3/blob/a0066d2497901e7b658f3aa1ba5cd33dc49e174c/addons/advanced_ballistics/functions/fnc_readWeaponDataFromConfig.sqf#L28
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.993; // 575, 719, 326m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_black_F";
        displayName="M4A1 .300 (Black)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.6;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_GL_black_F: JCA_arifle_M4A1_GL_black_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.993; // 575, 719, 326m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_GL_black_F";
        displayName="M4A1 .300 GL (Black)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout<br />Grenade Launcher<br />Caliber: 40 mm";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93.6;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_short_black_F: JCA_arifle_M4A1_short_black_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_short_black_F";
        displayName="M4A1 .300 CQB (Black)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_sand_F: JCA_arifle_M4A1_sand_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.993; // 575, 719, 326m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_sand_F";
        displayName="M4A1 .300 (Sand)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.6;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_GL_sand_F: JCA_arifle_M4A1_GL_sand_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.993; // 575, 719, 326m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_GL_sand_F";
        displayName="M4A1 .300 GL (Sand)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout<br />Grenade Launcher<br />Caliber: 40 mm";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93.6;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_short_sand_F: JCA_arifle_M4A1_short_sand_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_short_sand_F";
        displayName="M4A1 .300 CQB (Sand)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_olive_F: JCA_arifle_M4A1_olive_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.993; // 575, 719, 326m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_olive_F";
        displayName="M4A1 .300 (Olive)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.6;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_GL_olive_F: JCA_arifle_M4A1_GL_olive_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.993; // 575, 719, 326m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_GL_olive_F";
        displayName="M4A1 .300 GL (Olive)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout<br />Grenade Launcher<br />Caliber: 40 mm";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93.6;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000446; // 2.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A1_300BLK_short_olive_F: JCA_arifle_M4A1_short_olive_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A1_300BLK_short_olive_F";
        displayName="M4A1 .300 CQB (Olive)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_AFG_black_F: JCA_arifle_M4A4_AFG_black_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_AFG_black_F";
        displayName="M4A4 .300 AFG (Black)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_VFG_black_F: JCA_arifle_M4A4_VFG_black_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_VFG_black_F";
        displayName="M4A4 .300 VFG (Black)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_GL_black_F: JCA_arifle_M4A4_GL_black_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_GL_black_F";
        displayName="M4A4 .300 GL (Black)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout<br />Grenade Launcher<br />Caliber: 40 mm";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_AFG_sand_F: JCA_arifle_M4A4_AFG_sand_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_AFG_sand_F";
        displayName="M4A4 .300 AFG (Sand)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_VFG_sand_F: JCA_arifle_M4A4_VFG_sand_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_VFG_sand_F";
        displayName="M4A4 .300 VFG (Sand)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_GL_sand_F: JCA_arifle_M4A4_GL_sand_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_GL_sand_F";
        displayName="M4A4 .300 GL (Sand)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout<br />Grenade Launcher<br />Caliber: 40 mm";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG",
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_AFG_olive_F: JCA_arifle_M4A4_AFG_olive_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_AFG_olive_F";
        displayName="M4A4 .300 AFG (Olive)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_VFG_olive_F: JCA_arifle_M4A4_VFG_olive_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_VFG_olive_F";
        displayName="M4A4 .300 VFG (Olive)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_arifle_M4A4_300BLK_GL_olive_F: JCA_arifle_M4A4_GL_olive_F
    {
        ACE_barrelTwist=203.2 // 1:8" https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=800; // distance .300 Blackout 150gr Full Metal Jacket Boat-Tail Mach 0.8 (272m/s) ICAO
        initSpeed=-0.97; // 562, 702, 318m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        author="Grave & 3DGunsmith";
        baseWeapon="JCA_arifle_M4A4_300BLK_GL_olive_F";
        displayName="M4A4 .300 GL (Olive)";
        descriptionShort="Assault Rifle<br />Caliber: .300 Blackout<br />Grenade Launcher<br />Caliber: 40 mm";
        magazines[]=
        {
            "ld3k_30Rnd_300BLK_110gr_PMAG",
            "ld3k_30Rnd_300BLK_220gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag",
            "ld3k_30Rnd_300BLK_220gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_EMAG",
            "ld3k_30Rnd_300BLK_220gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_EMAG",
            "ld3k_30Rnd_300BLK_110gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_PMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_PMAG",
            "ld3k_30Rnd_300BLK_110gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_220gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_Red",
            "ld3k_30Rnd_300BLK_150gr_Stanag_Sand_Tracer_IR",
            "ld3k_30Rnd_300BLK_110gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_220gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_Red_sand_EMAG",
            "ld3k_30Rnd_300BLK_150gr_Tracer_IR_sand_EMAG"
        };
        magazineWell[]=
        {
            "STANAG_300"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90;
            class MuzzleSlot: asdg_MuzzleSlot_762
            {
                iconPosition[]={0,0.4};
                iconScale=0.2;
            };
        };
        class Single: Single
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000468; // 2.86 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755
        };
    };
    class JCA_muzzle_snds_tactical_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_762_tactical_black: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_sand: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_olive: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class muzzle_snds_H: ItemCore // Sound Suppressor 6.5mm
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class muzzle_snds_B: muzzle_snds_H // Sound Suppressor 7.62mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=12;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.2;
    };
};
