<?php /* inc/ConstantsSSIM.inc

SSIM Constants

History:
2018.10.07 Started based on the SIM version

ToDo djh??
----

Add PMembers RelUse action storage enum

Replace Level in $BroInfoA by SetMaxId
Add DefaultPMemId to $BroInfoA
Add Set is StartEnd and kids are not e.g. Tx542 re Import StartEnd processing.

*/

# Data Types Constants
# ====================

# Data Type Bit Settings
# ----------------------        Bit
const SSIM_DTB_Complex  = 1; #  1 Complex = multiple item data type. The data type is 'simple' or a single item data type if this bit is not set.
const SSIM_DTB_TextData = 2; #  2 Text encoded data such as Json or XML
const SSIM_DTB_Custom   = 4; #  3 Custom = own type created/specified by an app or entity

# Data Type TypeN Enums
# ---------------------
const SSIM_DT_TypeN_Base = 1; #  1 Base types are intuitive and suitable for many simple cases e.g. most facts in the SSIM Facts Directories.
const SSIM_DT_TypeN_Json = 2; #  2 Json types
const SSIM_DT_TypeN_SSIM = 3; #  3 SSIM types
const SSIM_DT_TypeN_XML  = 4; #  4 XML  types
const SSIM_DT_TypeN_XBRL = 5; #  5 XBRL types

# Data Type SubTypeN Enums
# ------------------------
# For TypeN = SSIM_DT_TypeN_Base            Name          Description
const SSIM_DT_SubTypeN_Base_Null     = 0; # Base.Null     Null data type used when the SSID description from the Facts Directories is the data e.g. a country shown externally as the country name in the human language of choice, 3 letter code, or 2 letters code according to formatting options
const SSIM_DT_SubTypeN_Base_Number   = 1; # Base.Number   A base 10 number as commonly understood in text form, like a Json Number
const SSIM_DT_SubTypeN_Base_DateTime = 2; # Base.DateTime A UTC/GMT date and optionally time in text numeric form year first CCYY.MM.DD{ HH:MM{:SS}}
const SSIM_DT_SubTypeN_Base_String   = 3; # Base.String   A string of UTF-8 encoded characters
const SSIM_DT_SubTypeN_Base_Blob     = 4; # Base.Blob     A sequence of binary bytes - a 'blob' of data
const SSIM_DT_SubTypeN_Base_File     = 5; # Base.File     A file in binary form

# For TypeN = SSIM_DT_TypeN_Json            Name          Description
const SSIM_DT_SubTypeN_Json_Number   = 1; # Json.Number   A Json number
const SSIM_DT_SubTypeN_Json_String   = 2; # Json.String   A Json string
const SSIM_DT_SubTypeN_Json_Oject    = 3; # Json.Oject    A Json object
const SSIM_DT_SubTypeN_Json_Array    = 4; # Json.Array    A Json array

# For TypeN = SSIM_DT_TypeN_SSIM             Name            Description
# Boolean Type
const SSIM_DT_SubTypeN_Bool          =  1; # Bool            Unsigned 8 bit int, 0 = false, 1 = true
# Integer Types
const SSIM_DT_SubTypeN_Int8          =  2; # Int8            Signed 8 bit int
const SSIM_DT_SubTypeN_UInt8         =  3; # Uint8           Unsigned 8 bit int
const SSIM_DT_SubTypeN_Int16         =  4; # Int16           Signed 16 bit int
const SSIM_DT_SubTypeN_Uint16        =  5; # Uint16          Unsigned 16 bit int
const SSIM_DT_SubTypeN_Int           =  6; # Int             Signed 32 bit int
const SSIM_DT_SubTypeN_Int32         =  6; # Int32           Signed 32 bit int`  Alias for Int
const SSIM_DT_SubTypeN_Uint          =  7; # Uint            Unsigned 32 bit int
const SSIM_DT_SubTypeN_Uint32        =  7; # Uint32          Unsigned 32 bit int Alias for Uint
const SSIM_DT_SubTypeN_Int64         =  8; # Int64           Signed 64 bit int
const SSIM_DT_SubTypeN_Uint64        =  9; # Uint64          Unsigned 64 bit int
const SSIM_DT_SubTypeN_Int128        = 10; # Int128          Signed 128 bit int
const SSIM_DT_SubTypeN_Uint128       = 11; # Uint128         Unsigned 128 bit int
# Decimal Types
const SSIM_DT_SubTypeN_Decimal32     = 12; # Decimal32[2]    Signed 32 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Udecimal32    = 13; # Udecimal32[2]   Unsigned 32 bit intr with implied decimals 2
const SSIM_DT_SubTypeN_Decimal       = 14; # Decimal[2]      Signed 64 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Decimal64     = 14; # Decimal64[2]    Signed 64 bit int with implied decimals 2     Alias for Decimal[2]
const SSIM_DT_SubTypeN_Udecimal      = 15; # Udecimal[2]     Unsigned 64 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Udecimal64    = 15; # Udecimal64[2]   Unsigned 64 bit int with implied decimals 2   Alias for Udecimal[2]
const SSIM_DT_SubTypeN_Decimal128    = 16; # Decimal128[2]   Signed 128 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Udecimal128   = 17; # Udecimal128[2]  Unsigned 128 bit int with implied decimals 2
# Money Types
const SSIM_DT_SubTypeN_Money32       = 18; # Money32[2]      Signed 32 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Umoney32      = 19; # Umoney32[2]     Unsigned 32 bit intr with implied decimals 2
const SSIM_DT_SubTypeN_Money         = 20; # Money[2]        Signed 64 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Money64       = 20; # Money64[2]      Signed 64 bit int with implied decimals 2     Alias for Money[2]
const SSIM_DT_SubTypeN_Umoney        = 21; # Umoney[2]       Unsigned 64 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Umoney64      = 21; # Umoney64[2]     Unsigned 64 bit int with implied decimals 2   Alias for Umoney[2]
const SSIM_DT_SubTypeN_Money128      = 22; # Money128[2]     Signed 128 bit int with implied decimals 2
const SSIM_DT_SubTypeN_Umoney128     = 23; # Umoney128[2]    Unsigned 128 bit int with implied decimals 2
# DateTime Types
const SSIM_DT_SubTypeN_DateTime      = 24; # DateTime        Unsigned 32 bit int unix style UTC date time - seconds from 1970.01.01
const SSIM_DT_SubTypeN_DateTime64    = 25; # DateTime64      Unsigned 64 bit int unix style UTC date time - seconds from 1970.01.01
const SSIM_DT_SubTypeN_DateYear      = 26; # DateYear        Year for years before 1970 including BCE years
const SSIM_DT_SubTypeN_DateYM        = 27; # DateYM          DateYear + Month 1 to 12 in byte 3
const SSIM_DT_SubTypeN_DateYMD       = 28; # DateYMD         DateYM + Day 1 to 31 in byte 4
const SSIM_DT_SubTypeN_DateYMDH      = 29; # DateYMDH        DateYMD + Hour 0 to 23 in byte 5
const SSIM_DT_SubTypeN_DateYMDHM     = 30; # DateYMDHM       DateYMDH + Minute 0 to 59 in byte 6
const SSIM_DT_SubTypeN_DateYMDHMS    = 31; # DateYMDHMS      DateYMDHM + Seconds 0 to 59 (60 when leap seconds occur) in byte 7
const SSIM_DT_SubTypeN_DateYMDHMSMil = 32; # DateYMDHMSMil   DateYMDHMS + Milliseconds 0 to 999 in 2 bytes 8 and 9
const SSIM_DT_SubTypeN_DateYMDHMSMic = 33; # DateYMDHMSMic   DateYMDHMS + Microseconds 0 to 999,999 in 3 bytes 8 to 10
const SSIM_DT_SubTypeN_DateYMDHMSNan = 34; # DateYMDHMSNan   DateYMDHMS + Nanoseconds 0 to 999,999,999 in 4 bytes 8 to 11
# String Type
const SSIM_DT_SubTypeN_String        = 35; # String          A string of UTF-8 encoded characters
# Floating Point Types
const SSIM_DT_SubTypeN_Float         = 36; # Float           IEEE 32 bit (single precision) floating point number
const SSIM_DT_SubTypeN_Double        = 37; # Double          IEEE 64 bit (double precision) floating point number













/*
Attribute Arrays by TypeN
=========================
SSIM_DT_TypeN_Base: none
SSIM_DT_TypeN_Json: none
SSIM_DT_TypeN_Std:  [Decimals, Min, Max, Incl, Excl] where all are optional ints and Incl + Excl can be a single int or an array of ints

*/







const SSIM_DTB_Money    =    32; #  6 A money type
const SSIM_DTB_Object   =   256; #  9 An object
const SSIM_DTB_Array    =   512; # 10 An array
const SSIM_DTB_Base     =  4096; # 13 Is a base data type for one item of data. Base types are intuitive and suitable for many simple cases e.g. most facts in the SSIM Facts Directories.
const SSIM_DTB_Json     =  8192; # 14 Json type
const SSIM_DTB_Std      = 16384; # 15 Standard SSIM type
const SSIM_DTB_XML      = 32768; # 16 XML type

# Ontologies.TypeN Enums
# ----------------------
const SSIM_Onts_TypeN_Pacio = 1; # Pacio
const SSIM_Onts_TypeN_XBRL  = 2; # XBRL Taxonomy

# Ontologies.Bits
# ---------------
const SSIM_OntsB_Live         = 1; # 0 The Ontology is Live

# Ontologies.Data indices
# -----------------------
const SSIM_OntsDX_EntityTypesA  = 0;
const SSIM_OntsDX_HeadingsAA    = 1;
const SSIM_OntsDX_PreferencesAA = 2;
const SSIM_OntsDX_Descr         = 3;

# EntitySizes.Bits
# ----------------
#onst                 = 1; # 1

# EntityTypes.Bits
# ----------------          Bit
const ETB_Incorporated = 1; # 0 Set if Entity is an Incorporated type; Unincororated o'wise
const ETB_CoSecDirRpt  = 2; # 1 Set if CoSec can sign Directors' Report

# EntityTypes.Data Indices
# ------------------------
const ETI_Credits  = 0;
const ETI_Bits     = 1;
const ETI_Name     = 2;
const ETI_SName    = 3;
const ETI_IdentURL = 4;
const ETI_CtryIdsA = 5;
const ETI_OntIdsA  = 6;
const ETI_SizeIdsA = 7;
const ETI_Comment  = 8;
# Terms
const ETI_Generic  =  9;
const ETI_Chairman = 10;
const ETI_Officer  = 11;
const ETI_Officers = 12;
const ETI_Ceo      = 13;
const ETI_Ceos     = 14;
const ETI_CeoJoint = 15;
const ETI_CoSec    = 16;
const ETI_Ident    = 17;
const ETI_SIdent   = 18;
const ETI_TaxNum   = 19;
const ETI_STaxNum  = 20;
const ETI_VatNum   = 21;
const ETI_SVatNum  = 22;


# Roles.RoleN Enums
# -----------
const SSIM_Roles_RoleN_Report = 1; # Report
const SSIM_Roles_RoleN_Note   = 2; # Note
const SSIM_Roles_RoleN_Prop   = 3; # Property
const SSIM_Roles_RoleN_Folio  = 4; # Folio of Properties

# PMembers.Bits
# -------------              Bit
const PMemB_D       =    1; #  0 D  DBO Ref
const PMemB_H       =    2; #  1 H  inHerited  DBO Ref
const PMemB_Ei      =    4; #  2 Ei Entity specific Instance
const PMemB_Ee      =    8; #  3 Ee Entity specific Extension
const PMemB_O       =   16; #  4 O  Override of DBO property
const PMemB_RO      =   32; #  5 RO Report Only = usable for reporting but not for posting
const PMemB_pYa     =   64; #  6 Y  PYA (Restated)
const PMemB_Zilch   =  128; #  7 Z  Not ever user selectable being reserved for Braiins operation e..g. Unallocated
const PMemB_Break   =  256; #  8    Break = start of a Group within the Property Member listing, shown by a different style row with Name and Label captions stored in the Break col of PMembers
const PMemB_Sim     =  512; #  9 ?  SIM type with specific one as per PropId: PropId_Regionss, PropId_Countries, PropId_Currencies, PropId_Exchanges, PropId_Languages, PropId_Industries
# Member Use Bits
const PMemB_UseM   =  1024; # 10 M  Properties with 'M" Member Use Codes always have multiple members with an 'M' code. It is Mandatory to include one of the 'M' members. 'M' codes can be followed by '+RL1' or '+RLn' codes.
const PMemB_UseRL1 =  2048; # 11 +RL1  If the member is included, one additional member chosen from the related list is mandatory
const PMemB_UseRLn =  4096; # 12 +RLn  If the member is included. one or more additional members chosen from the related list are mandatory
# Member Excl Rule Codes
const PMemB_IER_N  =  8192; # 13 N  The member cannot be excluded from use with a Bro via its Member x: attribute unless the member is an 'A' Member Use member for which all members in its Required List have been excluded. All 'RO' (Read Only) Type members are also 'N' Member Excl Rule members.
const PMemB_IER_1  = 16384; # 14 1  '1' Member Excl Rule codes apply only to members with 'A' Member Use codes. A group of such members can be reduced in number, potentially to 1, but not to zero unless all members in its Required List have been excluded.
const PMemB_IER_ET = 32768; # 15 ET The member is automatically excluded if the Entity's Entity Type excludes use of the member.

# PMemsA
# ------
# Inner indices for $PMemsA, array of Property Member Info by PMemId -> [PropId, Bits, SumListA, MuxListA, ReqListsA, RefTableN]
const PMemI_PropId    = 0; # PropId Property Id
const PMemI_Bits      = 1; # Bits   Property Member Bits
#onst PMemI_SumListA  =  ; # Array of PMemIds to be summed to this PMem. Not here. Summing is handled via the summing arrays.
const PMemI_MuxListA  = 2; # Array of PMemIds with which this PMem is Mutually Exclusive
const PMemI_AddListA  = 3; # Array of PMemIds for which this PMem is Additional To
const PMemI_ReqListA  = 4; # Array of PMemIds of Required Member
const PMemI_RefTableN = 5; # Table enum T_B_* (T_B_People, T_B_Entities, T_B_ERefs, T_Sim_*) if the PMem is a Type D, I, Ei, Ee, R, C, U, X, L which have a # Ref, o'wise 0 which means member cannot have a # Ref

# DiMesA
# ------
# Inner index constants for $DiMesA, array of Dimension member Info by PMemId -> [PropId, Bits, MType, MuxListA, SumListA] are in /Com/inc/ConstantsRgWip.inc
/*nst PMemI_PropId    = 0; # DimId Dimension Id
const DiMeI_Bits      = 1; # Bits  Dimension Member Bits
const DiMeI_MuxListA  = 2; # Array of DiMeIds with which this DiMe is Mutually Exclusive - DiMeB_muX bit is set when this applies
const DiMeI_SumListA  = 3; # Array of DiMeIds to be summed to this DiMe                  - DiMeB_Sum bit is set when this applies or has children
*/

/*
 BroSets constants are in Constants.inc as BroSets is a Braiins DB table
 -------
BroSet Types

In-Main: TaxnId = 0
         Can be used for posting, to store data, and generate non Tx reports.
         Can include In-Incl BroSets

In-Incl: TaxnId = 0
         Can include In-Incl BroSets

Out-Main: TaxnId must be set
          Must include a single In-Main BroSet
          Can include Out-Incl BroSets with the same TaxnId
          Accesses data via the In-Main BroSet, and can generate both non Tx reports and Tx reports

Out-Incl: TaxnId must be set
          Can include Out-Incl BroSets with the same TaxnId

Anything not listed as permitted is illegal. */

############
# BroInfoA # in files by BroSet Id e.g. BroInfoA.1.inc
############

# BroInfo.Bits
# ------------              Bit
const BroB_Set     =    1; #  0 Is a Set      /- MUX
const BroB_Ele     =    2; #  1 Is an Element |  Could have used !BroB_Set but made explicit for testing simplicity
const BroB_Type    =    3; #    Combo for Type masking BroB_Set | BroB_Ele
const BroB_Slave   =    4; #  2 Is a Slave       Also if MasterId col is set /- MUX |
const BroB_Master  =    8; #  3 Has Slave kid(s) Also if SlaveIds col is set |
const BroB_Out     =   16; #  4 Set if Bro is Out-BroSet type using Hys etc. Unset = BRL/In-BroSet type using Folios etc.
const BroB_DE      =   32; #  5 Posting Type for Money Bros: Set if is a DE type. Unset = Schedule
const BroB_RO      =   64; #  6 Set if is a Report Only Bro i.e. usable for reporting but not for posting i.e. is Non-Posting
const BroB_Summing =  128; #  7 Set if is a Summing Bro
const BroB_DBO     =  256; #  8 Set for a DBO Posting Bro: UsableProps == just one of the DBO Props; or No UsableProps but Member Allow list includes only DBO Prop Member
const BroB_UseM    =  512; #  9 Set if Bro is not RO and the Bro's Usable Props includes one of the Props which include Member Use 'M' codes
const BroB_NoTags  = 1024; # 10 Set if No iXBRL Tags are to be generated on use of the Bro in the RG. Duplicate HyId/TxId/TupId allowed.
const BroB_SFilter = 2048; # 11 Set for a Slave if filtering applies

# BroInfo.DataTypeN enums
# -----------------------
const DT_None     = 0;
const DT_String   = 1; # S String. All types > DT_String are numerical
const DT_Integer  = 2; # I Integer number
const DT_Money    = 3; # M Money number (processed internally as a 64 bit integer with 0 places of decimals (whole pounds/dollars assumed).
const DT_Decimal  = 4; # E Decimal or floating point number for percentages, ratios, or other calculated values with possible decimal fractions
const DT_Date     = 5; # D Date
const DT_Boolean  = 6; # B Boolean value 1 or 0 i.e. True or False, Yes or No. (Actually anything other than 0 means True/Yes.)
const DT_Enum     = 7; # N Enumerator
const DT_Share    = 8;
const DT_PerShare = 9;
const DT_Percent = 10;
const DT_MoneyString = 11; # Complex: Money and String narrative as a single 'tran' or entry where both values must be defined

# BroInfo.SignN enums
# -------------------
const BS_Dr    = 1; # debit  same as Tx constant TESN_Dr
const BS_Cr    = 2; # credit same as Tx constant TESN_Cr
const BS_Either= 3; # Equiv of Tx 'Not Set' via BS_None but made specirfic for RG = not undefined

# BroInfo.PeriodSEN enums
# -----------------------
const BPT_Duration    = 1; # Same as TEPTN_Duration
const BPT_Instant     = 2; # Same as TEPTN_Instant
const BPT_InstSumEnd  = 3; # Instant StartEnd SumEnd  type
const BPT_InstPostEnd = 4; # Instant StartEnd PostEnd type
const BPT_InstStock   = 5; # Instant StartEnd Stock   type

# BroInfo.SumUp enums
# -------------------
#                     0; # Not a summing Bro
const BroSumUp_Yes  = 1; # + or Yes or Sum Up
const BroSumUp_No   = 2; # No or Stop summing
const BroSumUp_NA   = 3; # NA because Kid has diff data type from Dad

# BroInfo.Data indices
# --------------------
const BII_OntIdsA      = 0;
const BII_CtryIdsA     = 1;
const BII_ETypeIdsA    = 2;
const BII_NotOntIdsA   = 3;
const BII_NotCtryIdsA  = 4;
const BII_NotETypeIdsA = 5;

# Inner indices for $BroInfoA, the array of Bro Info by BroId
# ---------------------------
const BroI_Bits      =  0; # BroInfo.Bits
const BroI_SetMaxId  =  1; # Max BroId of a Set Bro, used in down the tree mux check during posting. Also is truthy re bro being a Set.
const BroI_DataTypeN =  2;
const BroI_DadId     =  3; # BroInfo.Id of Parent if Bro has a parent = all except Level 0 Sets
const BroI_PeriodSEN =  4; # Provides StartEnd and Period info
const BroI_SignN     =  5; # 0|1|2 for undefined | Dr | Cr
const BroI_BroUsablePropDims = 6; # I Usable Props chr list for just this Bro. 0 if not applicable or is an Ele Slave without Usable list filtering.
                                  #   Remains set for a Set Slave re summing and SumUsablePropDims of any non-slave set members.
                                  # O Usable Dims chr list for just this Bro = tagable Dims. 0 if not applicable or is an Ele Slave without Usable list filtering.
                                  #   Remains set for a Set Slave re summing and SumUsablePropDims of any non-slave set members.
const BroI_SumUsablePropDims = 7; # I Usable Dims  chr list for Summing/Posting = BroUsableProps + any extra Props in SumUp ancestors. 0 if same as BroUsableProps (always for non-summing Bros)
                                  # O Usable Props chr list for /Summing        = BroUsableDims  + any extra Dims  in SumUp ancestors. 0 if same as BroUsableDims (always for non-summing Bros)
const BroI_PMemDiMesA        = 8; # I Bro PMem Overrides [] as below, 0 if empty
                                  # O Bro DiMe Overrides [] as below, 0 if empty
const BroI_Zones     =  9; #
# Ends here if In-BroSet, not Master, not Slave
const BroI_SlaveIdsA = 10; # Array of BroInfo.Ids of Slaves of this Bro if a Master /- slot shared
const BroI_SlaveYear = 10; # Rel Year for a Prior Year Slave 1-3        if a Slave  |
# Ends here if not Out-BroSet
const BroI_TxId      = 11; #
const BroI_ContextN  = 12; # Deduced by Build Structs for TxId Bros
const BroI_TuMeId    = 13; # TuMeId which applies if the Bro involves Tuple use. Converted from BroInfo.TupId by Build Structs
/*
BroI_PMemDiMesA =  Bro PMem/DiMe Overrides array [i => MandatsA, DefaultsA, ExcludesA, AllowsA]
Inner indices for BroI_PMemDiMesA */
const II_MandatsA  = 0; # i [] of Mandatory PMems/DiMes, Prop/Dim in Bro UsablePropDims or PMem/DiMe in AllowsA, only one per Prop/Dim, Mux with Defaults and Excludes
const II_DefaultsA = 1; # i [] of Default   PMems/DiMes, Prop/Dim in Bro UsablePropDims or PMem/DiMe in AllowsA, only one per Prop/Dim, Mux with Mandats  and Excludes
const II_ExcludesA = 2; # i [] of Exclude   PMems/DiMes, Prop/Dim in Bro UsablePropDims, Mux with Mandats, Defaults, and Allows
const II_AllowsA   = 3; # i [] of Allow     PMems/DiMes, No UsablePropDims, or Prop/Dim in Bro ExclPropDims, Mux with Excludes. BroSetImport sets ExclPropDims if not set and removes from UsablePropDims

# Check info is not stored in $BroInfoA. All is done via $CheckBrosA. See Braiins RG DB.txt and BuildStructs.php and Import.php

# Bro Reference Bits
# ------------------
const BRefB_PMemRef  =  1; # BroRef contains a PMem with a # Ref
const BRefB_PMemERef =  2; # BroRef contains a PMem with an Ee or Ei # Ref
const BRefB_PMemMux  =  4; # BroRef contains a PMem with a Mux list
const BRefB_PMemPya  =  8; # BroRef contains a PYA PMem
const BRefB_Start    = 16; # BroRef is Start which is allowed for in some data import cases.

# Inner indices for $ZonesA, the array of Zones by Id
const ZI_Ref       = 0;
const ZI_SignN     = 1;
#onst ZI_AllowDims = 2;


###########
# Globals #
###########
$BroSumTypesGA = [DT_Integer, DT_Money, DT_Decimal, DT_Share]; # Data Types for which Bro summing is to be performed
#                [2,3,4,8];

# djh?? To be moved into BuildStructs

# Properties
# ----------
const PropId_Entity      =  1; # DBO Type D
const PropId_Superior    =  2; # "   "    I
const PropId_Subord      =  3; # "   "    I
const PropId_TPA         =  4; # "   "    I
const PropId_Person      =  5; # "   "    D
const PropId_Officer     =  6; # "   "    I
const PropId_Address     =  7; # "   "    D
const PropId_Contact     =  8; # "   "    D
const PropId_FirstNonDbo =  9; # First property that isn't a DBO one. PropId < PropId_FirstNonDbo = a DBO Prop
#            Group          9
#            ConDis        10
const PropId_Restated    = 11;
# 12	EquityClasses
# 13	OpSegs
# 14	ProdsServs
# 15	MajCusts
# 16	BizCombos
const PropId_PPEClasses  = 17;
const PropId_IFAClasses  = 18;
/*19	ImpairAllowType
20	FIValueType
21	FIs
22	FILevel
23	FIMvts
24	ICRisk
25	CrRatings
26	MPeriods
27	DefTaxClasses
28	ProvClasses
29	PensionSchemes
30	SharePayment
31	ContLiabClasses */
const PropId_RPs         = 32;
#            ShareClasses= 33
const PropId_Regions     = 34;
const PropId_Countries   = 35;
const PropId_Currencies  = 36;
const PropId_Exchanges   = 37;
const PropId_Languages   = 38;
const PropId_Industries  = 39;
/*
40	ExpenseType
41	ExceptNon
42	Analysis
43	GroupTrans
44	Ageing */
const PropId_Instance    = 45;
const PropId_None        = 46;
const PropId_Unallocated = 47;


#DboPropsGA  = [PropId_Entity, PropId_Superior, PropId_Subord, PropId_TPA, PropId_Person, PropId_Officer, PropId_Address, PropId_Contact]; # DBO Props. Replaced by use of PropId_FirstNonDbo
$MUsePropsGA = [PropId_PPEClasses, PropId_IFAClasses, PropId_RPs]; # Props which include Member with Member Use 'M' codes

# Props to exclude from Summing Bros
# $SummingBroExcludePropsChrsA = ['X', 'Y', 'Z']; # Currencies, Exchanges, Languages or 40, 41, 42.  26.03.13 No. Removed this. Could want sums by these.
# Props to exclude from Non-Summing Bros if ...
$NonSummingBroExclPropsGA = [PropId_Restated];


# Property Members
# --------------
const PMemId_Subord_Assoc       =   7;
const PMemId_Subord_JV          =   8;
const PMemId_Subord_Subsid      =  11;
const PMemId_Officer_Ref        =  30;

const PMemId_PyaAmount          =  72;
const PMemId_PyaPriorPeriodIncr =  73; # IncrDecr
const PMemId_PyaAcctPolicyIncr  =  74;
const PMemId_PyaMaterialErrIncr =  75;
const PMemId_PyaOriginalAmount  =  76;
const PMemId_Unallocated        = 999;

#############
# Functions #
#############

function BroSetTypeStr($typeN) {
  static $sSA = ['None', 'In-Main', 'In-Incl', 'Out-Main', 'Out-Incl'];
  return $sSA[(int)$typeN];
}

function BroTypeStr($bits) {
  $type = ($bits&BroB_Set) ? 'Set' : 'Ele';
  if ($bits&BroB_Slave)  $type .= ' Slave';
  if ($bits&BroB_Master) $type .= ' Master';
  return $type;
}

function DataTypeStr($typeN) {
  static $sSA = ['None', 'String', 'Integer', 'Money', 'Decimal', 'Date', 'Boolean', 'Enum', 'Share', 'PerShare', 'Percent', 'MoneyString'];
  return $sSA[(int)$typeN];
}

function SumUpStr($sumUp) {
  static $sSA = ['', ' +', 'No', 'NA']; # space before + re importing into OO calc
  return $sSA[(int)$sumUp];
}

function AccountTypeStr($enum) {
  static $sSA = ['', 'BS', 'IS', 'CF', 'DPL', 'HPL', 'SCI', 'Notes', 'Info', 'Other'];
  return $sSA[(int)$enum];
}

