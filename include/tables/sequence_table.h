/**
 * Sequence Table
 *
 * DEFINE_SEQUENCE should be used to define sequences
 *    - Argument 0: The name of the sequence, as defined by .startseq in the .seq file
 *    - Argument 1: The sequence id enum name
 *    - Argument 2: Storage medium for the sequence (SampleMedium)
 *    - Argument 3: Cache load policy for the sequence (AudioCacheLoadType)
 *    - Argument 4: Sequence flags
 *
 * DEFINE_SEQUENCE_PTR should be used to define pointers to sequences
 *    - Argument 0: The sequence id enum name of the sequence this entry points to
 *    - Argument 1: The sequence id enum name for this pointer
 *    - Argument 2: Storage medium for the sequence (SampleMedium)
 *    - Argument 3: Cache load policy for the sequence (AudioCacheLoadType)
 *    - Argument 4: Sequence flags
 */
// For the comments below, the names in quotes come from the official soundtrack,  and the names in parentheses are internal names that come from MM3D.
// General Sound Effects
DEFINE_SEQUENCE    (Sequence_0,                   NA_BGM_GENERAL_SFX,                 MEDIUM_CART, CACHE_LOAD_PERMANENT,  SEQ_FLAG_FANFARE | SEQ_FLAG_ENEMY)
// Ambient background noises
DEFINE_SEQUENCE    (Sequence_1,                   NA_BGM_AMBIENCE,                    MEDIUM_CART, CACHE_LOAD_PERMANENT,  SEQ_FLAG_ENEMY                   )
// "Termina Field" (NA_BGM_FIELD)
DEFINE_SEQUENCE    (Sequence_2,                   NA_BGM_TERMINA_FIELD,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Chase" (NA_BGM_CHASE)
DEFINE_SEQUENCE    (Sequence_3,                   NA_BGM_CHASE,                       MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESTORE                 )
// "Majora's Theme" (NA_BGM_STALKID)
DEFINE_SEQUENCE    (Sequence_4,                   NA_BGM_MAJORAS_THEME,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Clock Tower" (NA_BGM_CLOCK_TOWER)
DEFINE_SEQUENCE    (Sequence_5,                   NA_BGM_CLOCK_TOWER,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Stone Tower Temple" - used for both Stone Tower and the Temple (NA_BGM_RUIN_DUNGEON_FRONT)
DEFINE_SEQUENCE    (Sequence_6,                   NA_BGM_STONE_TOWER_TEMPLE,          MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Stone Tower Temple Upside-down" - used for both Inverted Stone Tower and the Temple (NA_BGM_RUIN_DUNGEON_REVERSE)
DEFINE_SEQUENCE    (Sequence_7,                   NA_BGM_INV_STONE_TOWER_TEMPLE,      MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Missed Event 1" (NA_BGM_FAILURE_0)
DEFINE_SEQUENCE    (Sequence_8,                   NA_BGM_FAILURE_0,                   MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Missed Event 2" - used for failing the Milk Run (NA_BGM_FAILURE_1)
DEFINE_SEQUENCE    (Sequence_9,                   NA_BGM_FAILURE_1,                   MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Happy Mask Saleman's Theme" (NA_BGM_OMENYA)
DEFINE_SEQUENCE    (Sequence_10,                  NA_BGM_HAPPY_MASK_SALESMAN,         MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Song Of Healing" (NA_BGM_DEMO_CURE)
DEFINE_SEQUENCE    (Sequence_11,                  NA_BGM_SONG_OF_HEALING,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Southern Swamp" - used for both Southern Swamp and Woodfall (NA_BGM_DAMP_AREA)
DEFINE_SEQUENCE    (Sequence_12,                  NA_BGM_SWAMP_REGION,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Ghost Attack" (NA_BGM_UFO)
DEFINE_SEQUENCE    (Sequence_13,                  NA_BGM_ALIEN_INVASION,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Boat Cruise" (NA_BGM_JUNGLE_CREWS)
DEFINE_SEQUENCE    (Sequence_14,                  NA_BGM_SWAMP_CRUISE,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Sharp's Curse" (NA_BGM_SHARP)
DEFINE_SEQUENCE    (Sequence_15,                  NA_BGM_SHARPS_CURSE,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Great Bay Coast" - used for Great Bay Coast, Zora Cape, and Pinnacle Rock (NA_BGM_SEA_AREA)
DEFINE_SEQUENCE    (Sequence_16,                  NA_BGM_GREAT_BAY_REGION,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Ikana Valley" (NA_BGM_IKANA_AREA)
DEFINE_SEQUENCE    (Sequence_17,                  NA_BGM_IKANA_REGION,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Deku Palace" (NA_BGM_DEKU_KING)
DEFINE_SEQUENCE    (Sequence_18,                  NA_BGM_DEKU_PALACE,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Mountain Village" - used for Mountain Village, Snowhead, and Goron Village exterior (NA_BGM_SNOW_AREA)
DEFINE_SEQUENCE    (Sequence_19,                  NA_BGM_MOUNTAIN_REGION,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Pirates' Fortress" (NA_BGM_PIRATE_AREA)
DEFINE_SEQUENCE    (Sequence_20,                  NA_BGM_PIRATES_FORTRESS,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Clock Town, First Day" - Loaded from the main Clock Town seqeuence (sequence 0x1D) (NA_BGM_DUMMY_21)
DEFINE_SEQUENCE    (Sequence_21,                  NA_BGM_CLOCK_TOWN_DAY_1,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Clock Town, Second Day" - Loaded from the main Clock Town seqeuence (sequence 0x1D) (NA_BGM_DUMMY_22)
DEFINE_SEQUENCE    (Sequence_22,                  NA_BGM_CLOCK_TOWN_DAY_2,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Clock Town, Third Day" - Loaded from the main Clock Town seqeuence (sequence 0x1D) (NA_BGM_DUMMY_23)
DEFINE_SEQUENCE    (Sequence_23,                  NA_BGM_CLOCK_TOWN_DAY_3,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// File Select (NA_BGM_FILE_SELECT)
DEFINE_SEQUENCE    (Sequence_24,                  NA_BGM_FILE_SELECT,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_SKIP_HARP_INTRO         )
// "Event Clear" (NA_BGM_EVENT_CLEAR)
DEFINE_SEQUENCE    (Sequence_25,                  NA_BGM_CLEAR_EVENT,                 MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_RESUME                  )
// "Battle" (NA_BGM_ENEMY)
DEFINE_SEQUENCE    (Sequence_26,                  NA_BGM_ENEMY,                       MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Boss Battle" (NA_BGM_BOSS00)
DEFINE_SEQUENCE    (Sequence_27,                  NA_BGM_BOSS,                        MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESTORE                 )
// "Woodfall Temple" (NA_BGM_JUNGLE_DUNGEON)
DEFINE_SEQUENCE    (Sequence_28,                  NA_BGM_WOODFALL_TEMPLE,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// Loads one of sequences 0x15, 0x16, or 0x17. Will also play the "morning theme" if it is the start of a day (NA_BGM_MARKET)
DEFINE_SEQUENCE    (Sequence_29,                  NA_BGM_CLOCK_TOWN_MAIN_SEQUENCE,    MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Opening" - plays during the ambush in the opening forest area (NA_BGM_OPENING)
DEFINE_SEQUENCE    (Sequence_30,                  NA_BGM_OPENING,                     MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "House" (NA_BGM_LINK_HOUSE)
DEFINE_SEQUENCE    (Sequence_31,                  NA_BGM_INSIDE_A_HOUSE,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESUME_PREV             )
// "Game Over" (NA_BGM_GAME_OVER)
DEFINE_SEQUENCE    (Sequence_32,                  NA_BGM_GAME_OVER,                   MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Boss Clear" (NA_BGM_BOSS_CLEAR)
DEFINE_SEQUENCE    (Sequence_33,                  NA_BGM_CLEAR_BOSS,                  MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Item Catch" (NA_BGM_ITEM_GET)
DEFINE_SEQUENCE    (Sequence_34,                  NA_BGM_GET_ITEM,                    MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// Just points to the "Clock Town, Second Day" sequence (sequence 0x16) (NA_BGM_GATE_OPEN, same name as the Door of Time song from OoT)
DEFINE_SEQUENCE_PTR(NA_BGM_CLOCK_TOWN_DAY_2,      NA_BGM_CLOCK_TOWN_DAY_2_PTR,        MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Get A Heart Container!" (NA_BGM_HEART_GET)
DEFINE_SEQUENCE    (Sequence_36,                  NA_BGM_GET_HEART,                   MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Mini Game" (NA_BGM_MINI_GAME_2)
DEFINE_SEQUENCE    (Sequence_37,                  NA_BGM_TIMED_MINI_GAME,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESTORE                 )
// "Goron Race" (NA_BGM_GORON_RACE)
DEFINE_SEQUENCE    (Sequence_38,                  NA_BGM_GORON_RACE,                  MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Music Box House" (NA_BGM_ORGEL_HOUSE)
DEFINE_SEQUENCE    (Sequence_39,                  NA_BGM_MUSIC_BOX_HOUSE,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Fairy's Fountain" - just points to the File Select sequence (sequence 0x18) (NA_BGM_GODESS)
DEFINE_SEQUENCE_PTR(NA_BGM_FILE_SELECT,           NA_BGM_FAIRY_FOUNTAIN,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Zelda's Theme" (NA_BGM_HIME)
DEFINE_SEQUENCE    (Sequence_41,                  NA_BGM_ZELDAS_LULLABY,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Rosa Sisters" (NA_BGM_SISTER_DANCER)
DEFINE_SEQUENCE    (Sequence_42,                  NA_BGM_ROSA_SISTERS,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Open Treasure Box" (NA_BGM_OPEN_TRE_BOX)
DEFINE_SEQUENCE    (Sequence_43,                  NA_BGM_OPEN_CHEST,                  MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Marine Research Laboratory" (NA_BGM_DRUGSTORE)
DEFINE_SEQUENCE    (Sequence_44,                  NA_BGM_MARINE_RESEARCH_LAB,         MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Giants' Theme" (NA_BGM_KYOJIN_ROOM)
DEFINE_SEQUENCE    (Sequence_45,                  NA_BGM_GIANTS_THEME,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_SKIP_HARP_INTRO         )
// "Guru-Guru's Song" (NA_BGM_FUSHA)
DEFINE_SEQUENCE    (Sequence_46,                  NA_BGM_SONG_OF_STORMS,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Romani Ranch" (NA_BGM_RONRON)
DEFINE_SEQUENCE    (Sequence_47,                  NA_BGM_ROMANI_RANCH,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Goron Village" (NA_BGM_GORON)
DEFINE_SEQUENCE    (Sequence_48,                  NA_BGM_GORON_VILLAGE,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Mayor's Meeting" (NA_BGM_MEETING)
DEFINE_SEQUENCE    (Sequence_49,                  NA_BGM_MAYORS_OFFICE,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Ocarina “Epona's Song”" (NA_BGM_OCA_EPONA)
DEFINE_SEQUENCE    (Sequence_50,                  NA_BGM_OCARINA_EPONA,               MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Sun's Song”" - leftover from OoT (NA_BGM_OCA_SUNS)
DEFINE_SEQUENCE    (Sequence_51,                  NA_BGM_OCARINA_SUNS,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Song Of Time”" (NA_BGM_TIME_NORMAL)
DEFINE_SEQUENCE    (Sequence_52,                  NA_BGM_OCARINA_TIME,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Song Of Storms”" (NA_BGM_OCA_STORM)
DEFINE_SEQUENCE    (Sequence_53,                  NA_BGM_OCARINA_STORM,               MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Zora Hall" (NA_BGM_ZORA)
DEFINE_SEQUENCE    (Sequence_54,                  NA_BGM_ZORA_HALL,                   MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESUME                  )
// "Get A Mask!" (NA_BGM_MASK_GET)
DEFINE_SEQUENCE    (Sequence_55,                  NA_BGM_GET_NEW_MASK,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Middle Boss Battle" (NA_BGM_MIDDLE_BOSS)
DEFINE_SEQUENCE    (Sequence_56,                  NA_BGM_MINI_BOSS,                   MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESTORE                 )
// "Small Item Catch" (NA_BGM_S_ITEM_GET)
DEFINE_SEQUENCE    (Sequence_57,                  NA_BGM_GET_SMALL_ITEM,              MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Astral Observatory" (NA_BGM_TENMONDAI)
DEFINE_SEQUENCE    (Sequence_58,                  NA_BGM_ASTRAL_OBSERVATORY,          MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Cavern" - used for grottos (NA_BGM_NORMAL_DUNGEON)
DEFINE_SEQUENCE    (Sequence_59,                  NA_BGM_CAVERN,                      MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Milk Bar" (NA_BGM_MILK_BAR)
DEFINE_SEQUENCE    (Sequence_60,                  NA_BGM_MILK_BAR,                    MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESUME | SEQ_FLAG_ENEMY )
// "Enter Zelda" - leftover from OoT (NA_BGM_APPEAR)
DEFINE_SEQUENCE    (Sequence_61,                  NA_BGM_ZELDA_APPEAR,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Woods Of Mystery" - Saria's Song from OoT, also used when dancing with the scarecrow (NA_BGM_MAYOIMORI)
DEFINE_SEQUENCE    (Sequence_62,                  NA_BGM_SARIAS_SONG,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Goron Race Goal" (NA_BGM_GORON_GOAL)
DEFINE_SEQUENCE    (Sequence_63,                  NA_BGM_GORON_GOAL,                  MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Horse Race" (NA_BGM_HORSE)
DEFINE_SEQUENCE    (Sequence_64,                  NA_BGM_HORSE,                       MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Horse Race Goal" (NA_BGM_HORSE_GOAL)
DEFINE_SEQUENCE    (Sequence_65,                  NA_BGM_HORSE_GOAL,                  MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Gorman Track" (NA_BGM_INGO)
DEFINE_SEQUENCE    (Sequence_66,                  NA_BGM_INGO,                        MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Magic Hags' Potion Shop" (NA_BGM_KOTAKE_KOUME)
DEFINE_SEQUENCE    (Sequence_67,                  NA_BGM_KOTAKE_POTION_SHOP,          MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Shop" (NA_BGM_SHOP)
DEFINE_SEQUENCE    (Sequence_68,                  NA_BGM_SHOP,                        MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESUME_PREV             )
// "Owl" (NA_BGM_OWL)
DEFINE_SEQUENCE    (Sequence_69,                  NA_BGM_OWL,                         MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Shooting Gallery" (NA_BGM_MINI_GAME)
DEFINE_SEQUENCE    (Sequence_70,                  NA_BGM_SHOOTING_GALLERY,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_RESUME_PREV             )
// "Ocarina “Song Of Soaring”" (NA_BGM_OCA_BIGWING)
DEFINE_SEQUENCE    (Sequence_71,                  NA_BGM_OCARINA_SOARING,             MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Song Of Healing”" (NA_BGM_OCA_CURE)
DEFINE_SEQUENCE    (Sequence_72,                  NA_BGM_OCARINA_HEALING,             MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Inverted Song Of Time”" (NA_BGM_TIME_SPEED)
DEFINE_SEQUENCE    (Sequence_73,                  NA_BGM_INVERTED_SONG_OF_TIME,       MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Song Of Double Time”" (NA_BGM_TIME_JUMP)
DEFINE_SEQUENCE    (Sequence_74,                  NA_BGM_SONG_OF_DOUBLE_TIME,         MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Sonata of Awakening" (NA_BGM_DEMO_AWAKING)
DEFINE_SEQUENCE    (Sequence_75,                  NA_BGM_SONATA_OF_AWAKENING,         MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Goron Lullaby" (NA_BGM_DEMO_LULLABY)
DEFINE_SEQUENCE    (Sequence_76,                  NA_BGM_GORON_LULLABY,               MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "New Wave Bossa Nova" - both saxophone and vocals (NA_BGM_DEMO_TIDE)
DEFINE_SEQUENCE    (Sequence_77,                  NA_BGM_NEW_WAVE_BOSSA_NOVA,         MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Elegy Of Emptiness" (NA_BGM_DEMO_SHELL)
DEFINE_SEQUENCE    (Sequence_78,                  NA_BGM_ELEGY_OF_EMPTINESS,          MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Oath To Order" (NA_BGM_DEMO_PLEDGE)
DEFINE_SEQUENCE    (Sequence_79,                  NA_BGM_OATH_TO_ORDER,               MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Swordsman's School" (NA_BGM_EXERCISE_HALL)
DEFINE_SEQUENCE    (Sequence_80,                  NA_BGM_SWORD_TRAINING_HALL,         MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Ocarina “Goron Lullaby Intro”" (NA_BGM_DEMO_LULLABY_HALF)
DEFINE_SEQUENCE    (Sequence_81,                  NA_BGM_OCARINA_LULLABY_INTRO,       MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Get The Ocarina!" (NA_BGM_OCA_YOUSEI)
DEFINE_SEQUENCE    (Sequence_82,                  NA_BGM_LEARNED_NEW_SONG,            MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Bremen March" (NA_BGM_FACEMASK)
DEFINE_SEQUENCE    (Sequence_83,                  NA_BGM_BREMEN_MARCH,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ballad Of The Wind Fish" - quartet performed in on the Milk Bar stage (NA_BGM_QUARTET)
DEFINE_SEQUENCE    (Sequence_84,                  NA_BGM_BALLAD_OF_THE_WIND_FISH,     MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Song Of Soaring" (NA_BGM_WING_WARP)
DEFINE_SEQUENCE    (Sequence_85,                  NA_BGM_SONG_OF_SOARING,             MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_RESTORE                 )
// Just points to the "Milk Bar" sequence (sequence 0x3C) (NA_BGM_MILK_BAR_DUMMY)
DEFINE_SEQUENCE_PTR(NA_BGM_MILK_BAR,              NA_BGM_MILK_BAR_DUPLICATE,          MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Last Day" (NA_BGM_TIME_LIMIT)
DEFINE_SEQUENCE    (Sequence_87,                  NA_BGM_FINAL_HOURS,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Mikau" - looping part of the song (NA_BGM_MIKAU_LIFF)
DEFINE_SEQUENCE    (Sequence_88,                  NA_BGM_MIKAU_RIFF,                  MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Mikau" - a single guitar chord to end the song (NA_BGM_MIKAU_FIN)
DEFINE_SEQUENCE    (Sequence_89,                  NA_BGM_MIKAU_FINALE,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Frog Song" - conducting the frogs with Don Gero's Mask (NA_BGM_FROG_SONG)
DEFINE_SEQUENCE    (Sequence_90,                  NA_BGM_FROG_SONG,                   MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Ocarina “Sonata Of Awakening”" (NA_BGM_OCA_AWAKING)
DEFINE_SEQUENCE    (Sequence_91,                  NA_BGM_OCARINA_SONATA,              MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Goron Lullaby”" (NA_BGM_OCA_LULLABY)
DEFINE_SEQUENCE    (Sequence_92,                  NA_BGM_OCARINA_LULLABY,             MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “New Wave Bossa Nova”" (NA_BGM_OCA_TIDE)
DEFINE_SEQUENCE    (Sequence_93,                  NA_BGM_OCARINA_NEW_WAVE,            MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Elegy of Emptiness”" (NA_BGM_OCA_SHELL)
DEFINE_SEQUENCE    (Sequence_94,                  NA_BGM_OCARINA_ELEGY,               MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ocarina “Oath To Order”" (NA_BGM_OCA_PLEDGE)
DEFINE_SEQUENCE    (Sequence_95,                  NA_BGM_OCARINA_OATH,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// Majora Boss Room. Just points to the "Last Day" sequence (sequence 0x57) (NA_BGM_LAST_DUNGEON)
DEFINE_SEQUENCE_PTR(NA_BGM_FINAL_HOURS,           NA_BGM_MAJORAS_LAIR,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// Just points to the "Ocarina “Goron Lullaby Intro”" sequence (sequence 0x51) (NA_BGM_OCA_LULLABY_HALF)
DEFINE_SEQUENCE_PTR(NA_BGM_OCARINA_LULLABY_INTRO, NA_BGM_OCARINA_LULLABY_INTRO_PTR,   MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Bass & Guitar Session" (NA_BGM_OCA_SESSION)
DEFINE_SEQUENCE    (Sequence_98,                  NA_BGM_OCARINA_GUITAR_BASS_SESSION, MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Piano Solo" (NA_BGM_DEMO_SESSION)
DEFINE_SEQUENCE    (Sequence_99,                  NA_BGM_PIANO_SESSION,               MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "The Indigo-Go's" (NA_BGM_ALLPART_SESSION)
DEFINE_SEQUENCE    (Sequence_100,                 NA_BGM_INDIGO_GO_SESSION,           MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Snowhead Temple" (NA_BGM_SILVER_DUNGEON)
DEFINE_SEQUENCE    (Sequence_101,                 NA_BGM_SNOWHEAD_TEMPLE,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Great Bay Temple" (NA_BGM_DEEPBLUE_DUNGEON)
DEFINE_SEQUENCE    (Sequence_102,                 NA_BGM_GREAT_BAY_TEMPLE,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "New Wave Bossa Nova" - saxophone only, no vocals (NA_BGM_DEMO_TIDE_SAX)
DEFINE_SEQUENCE    (Sequence_103,                 NA_BGM_NEW_WAVE_SAXOPHONE,          MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "New Wave Bossa Nova" - vocals only, no saxophone (NA_BGM_DEMO_TIDE_VOCAL)
DEFINE_SEQUENCE    (Sequence_104,                 NA_BGM_NEW_WAVE_VOCAL,              MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Majora's Wrath Battle" (NA_BGM_MUJURA_1)
DEFINE_SEQUENCE    (Sequence_105,                 NA_BGM_MAJORAS_WRATH,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Majora's Incarnate Battle" (NA_BGM_MUJURA_2)
DEFINE_SEQUENCE    (Sequence_106,                 NA_BGM_MAJORAS_INCARNATION,         MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Majora's Mask Battle" (NA_BGM_MUJURA_3)
DEFINE_SEQUENCE    (Sequence_107,                 NA_BGM_MAJORAS_MASK,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Bass Practice" (NA_BGM_BASS_PLAY)
DEFINE_SEQUENCE    (Sequence_108,                 NA_BGM_BASS_PLAY,                   MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Drums Practice" (NA_BGM_DRUMS_PLAY)
DEFINE_SEQUENCE    (Sequence_109,                 NA_BGM_DRUMS_PLAY,                  MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Piano Practice" (NA_BGM_PIANO_PLAY)
DEFINE_SEQUENCE    (Sequence_110,                 NA_BGM_PIANO_PLAY,                  MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "Ikana Castle" (NA_BGM_IKANA_CASTLE)
DEFINE_SEQUENCE    (Sequence_111,                 NA_BGM_IKANA_CASTLE,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_ENEMY                   )
// "Calling The Four Giants" (NA_BGM_GATHERING)
DEFINE_SEQUENCE    (Sequence_112,                 NA_BGM_GATHERING_GIANTS,            MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Kamaro's Dance" (NA_BGM_CAMARO_DANCE)
DEFINE_SEQUENCE    (Sequence_113,                 NA_BGM_KAMARO_DANCE,                MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE_KAMARO          )
// "Cremia's Carriage" (NA_BGM_DONKEY_CART)
DEFINE_SEQUENCE    (Sequence_114,                 NA_BGM_CREMIA_CARRIAGE,             MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Keaton's Quiz" (NA_BGM_QUIZ)
DEFINE_SEQUENCE    (Sequence_115,                 NA_BGM_KEATON_QUIZ,                 MEDIUM_CART, CACHE_LOAD_PERSISTENT, SEQ_FLAG_FANFARE                 )
// "The End / Credits" - plays the first half, then loads sequence 0x7F for the second half (NA_BGM_END_DEMO)
DEFINE_SEQUENCE    (Sequence_116,                 NA_BGM_END_CREDITS,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// Similar to "Opening" (sequence 0x1E), but the intro loops endlessly (NA_BGM_OPENING_LOOP)
DEFINE_SEQUENCE    (Sequence_117,                 NA_BGM_OPENING_LOOP,                MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Title Theme" (NA_BGM_TITLE)
DEFINE_SEQUENCE    (Sequence_118,                 NA_BGM_TITLE_THEME,                 MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Woodfall Rises" (NA_BGM_DUNGEON_APPEAR)
DEFINE_SEQUENCE    (Sequence_119,                 NA_BGM_DUNGEON_APPEAR,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Southern Swamp Clears" (NA_BGM_PURIFICATION_0)
DEFINE_SEQUENCE    (Sequence_120,                 NA_BGM_WOODFALL_CLEAR,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
// "Snowhead Clear" (NA_BGM_PURIFICATION_1)
DEFINE_SEQUENCE    (Sequence_121,                 NA_BGM_SNOWHEAD_CLEAR,              MEDIUM_CART, CACHE_LOAD_TEMPORARY,  SEQ_FLAG_FANFARE                 )
//
DEFINE_SEQUENCE    (Sequence_122,                 NA_BGM_SEQ_122,                     MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "To The Moon" (NA_BGM_INTO_THE_MOON)
DEFINE_SEQUENCE    (Sequence_123,                 NA_BGM_INTO_THE_MOON,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "The Giants' Exit" (NA_BGM_GOODBYE_GIANT)
DEFINE_SEQUENCE    (Sequence_124,                 NA_BGM_GOODBYE_GIANT,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Tatl & Tael" (NA_BGM_CHAT)
DEFINE_SEQUENCE    (Sequence_125,                 NA_BGM_TATL_AND_TAEL,               MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "Moon's Destruction" (NA_BGM_MOON_VANISH)
DEFINE_SEQUENCE    (Sequence_126,                 NA_BGM_MOONS_DESTRUCTION,           MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )
// "The End / Credits" - second half. Sequence 0x74 loads this after playing the first half (NA_BGM_OCA_MUS)
DEFINE_SEQUENCE    (Sequence_127,                 NA_BGM_END_CREDITS_SECOND_HALF,     MEDIUM_CART, CACHE_LOAD_TEMPORARY,  0                                )