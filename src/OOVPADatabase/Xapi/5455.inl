// ******************************************************************
// *
// *   OOVPADatabase->Xapi->5455.inl
// *
// *  XbSymbolDatabase is free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
// *
// *  (c) 2017 jarupxx
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * XInputGetState
// ******************************************************************
OOVPA_SIG_HEADER_NO_XREF(XInputGetState,
                         5455)
OOVPA_SIG_MATCH(

    { 0x0D, 0x0C },
    { 0x1C, 0x5E },
    { 0x2B, 0xBB },
    { 0x3A, 0x80 },
    { 0x49, 0x08 },
    { 0x58, 0xF3 },
    { 0x67, 0x15 },
    //
);

// ******************************************************************
// * XMountAlternateTitleA
// ******************************************************************
OOVPA_SIG_HEADER_NO_XREF(XMountAlternateTitleA,
                         5455)
OOVPA_SIG_MATCH(

    { 0x0B, 0x08 },

    { 0x18, 0x0B },
    { 0x19, 0x57 },
    { 0x1A, 0x33 },
    { 0x1B, 0xFF },
    { 0x1C, 0x80 },
    { 0x1D, 0xE3 },
    { 0x1E, 0xDF },
    { 0x1F, 0x80 },

    { 0xC1, 0x83 },
    { 0xD0, 0x15 },
    //
);

// ******************************************************************
// * GetTypeInformation_8
// ******************************************************************
// Generic OOVPA as of 5455 and newer.
OOVPA_SIG_HEADER_XREF(GetTypeInformation_8,
                      5455,
                      XRefTwo)
OOVPA_SIG_MATCH(

    // mov eax,g_DeviceTypeInfoTableBegin
    XREF_ENTRY(0x03, XREF_g_DeviceTypeInfoTableBegin), // derived

    // mov esi,g_DeviceTypeInfoTableEnd
    XREF_ENTRY(0x0B, XREF_g_DeviceTypeInfoTableEnd), // derived

    // mov eax,g_DeviceTypeInfoTableBegin
    OV_MATCH(0x02, 0xB8),
    // push edi
    // mov edi,eax
    // mov esi,g_DeviceTypeInfoTableEnd
    OV_MATCH(0x07, 0x57, 0x8B, 0xF8, 0xBE),

    // cmp edi,esi
    OV_MATCH(0x11, 0x3B, 0xFE),

    // jnc +0x13
    OV_MATCH(0x16, 0x73, 0x13),

    // mov edi,dword [eax]
    OV_MATCH(0x18, 0x8B, 0x38),
    // test edi,edi
    OV_MATCH(0x1A, 0x85, 0xFF),

    // cmp dword [edi],cl
    OV_MATCH(0x1E, 0x38, 0x0F),
    // JZ +0x0F
    OV_MATCH(0x20, 0x74, 0x0F),

    // add eax,0x04
    OV_MATCH(0x24, 0x83, 0xC0, 0x04),

    // ret
    OV_MATCH(0x30, 0xC3),

    // jmp -0x0A
    OV_MATCH(0x35, 0xEB, 0xF6),
    //
);
