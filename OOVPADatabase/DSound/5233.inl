// ******************************************************************
// *
// *   OOVPADatabase->DSound->5233.inl
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
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * DirectSound::CDirectSound::EnableHeadphones
// ******************************************************************
// TODO: Need to re-evaluate. Possible false detection.
OOVPA_XREF(CDirectSound_EnableHeadphones, 5233, 9,

    XREF_CDirectSound_EnableHeadphones,
    XRefZero)
        { 0x00, 0x55 },
        { 0x16, 0x45 },
        { 0x1D, 0x0B },
        { 0x2A, 0x05 },
        { 0x46, 0x95 },
        { 0x56, 0x80 },
        { 0x5D, 0x7F },
        { 0x74, 0xA4 },
        { 0x99, 0x08 },
OOVPA_END;

// ******************************************************************
// * CMcpxVoiceClient::Commit3dSettings
// ******************************************************************
OOVPA_XREF(CMcpxVoiceClient_Commit3dSettings, 5233, 12,

    XREF_CMcpxVoiceClient_Commit3dSettings,
    XRefZero)

        { 0x00, 0x55 },

        // CMcpxVoiceClient::Commit3dSettings+0x3F : cmp edi, 0x02
        { 0x3F, 0x83 },
        { 0x40, 0xFF },
        { 0x41, 0x02 },

        // CMcpxVoiceClient::Commit3dSettings+0x61 : mov e__,[e__+0x000000B4]
        { 0x61, 0x8B },
        //{ 0x62, 0x__ },
        { 0x63, 0xB4 },
        { 0x64, 0x00 },
        //{ 0x65, 0x00 },
        { 0x66, 0x00 },

        // CMcpxVoiceClient::Commit3dSettings+0x70 : mov eax,[eax+0x000000B4]
        { 0x70, 0x8B },
        //{ 0x71, 0x80 },
        { 0x72, 0xB4 },
        { 0x73, 0x00 },
        //{ 0x74, 0x00 },
        { 0x75, 0x00 },

OOVPA_END;
