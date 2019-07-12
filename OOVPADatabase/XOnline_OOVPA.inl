// ******************************************************************
// *
// *   OOVPADatabase->XOnline_OOVPA.inl
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
// *  (c) 2017 jarupxx
// *
// *  All rights reserved
// *
// ******************************************************************

// Titles which did compiled with full library version
//   [LibV] Title Name                        | Verify  |   Comments
//-------------------------------------------------------------------
// * [4831] NBA2K3                            |  100%   | Contain full library.
// * [4928] Unreal Championship               |  100%   | Contain full library.
// * [5028] Capcom vs. SNK 2 EO               |  100%   | Contain full library.
// * [5120] Muzzle Flash                      |  100%   | have 11/14 library.
// * [5233] MotoGP 2                          |  100%   | have 11/14 library.
// * [5344] Burnout 2                         |  100%   | have 11/14 library.
// * [5455] Ghost Recon Island Thunder        |  100%   | Contain full library.
// * [5558] XIII                              |  100%   | Contain full library.
// * [5659] Plus Plum 2                       |  100%   | Contain full library.
// * [5788] All-Star Baseball '05             |  100%   | Contain full library.
// * [5849] Kingdom Under Fire: The Crusaders |  100%   | Contain full library.

// TODO: Known XOnlines OOVPA issue list
// * Following OOVPA revision are not verified
//   * listen (5120, 5233)
//   * recv (5120, 5233)
//   * send (5120, 5233)

#ifndef XONLINES_OOVPA_INL
#define XONLINES_OOVPA_INL

#include "../OOVPA.h"

#include "XOnline/4361.inl"
#include "XOnline/4627.inl"
#include "XOnline/4831.inl"
#include "XOnline/5028.inl"
#include "XOnline/5455.inl"
#include "XOnline/5558.inl"
#include "XOnline/5659.inl"
#include "XOnline/5788.inl"
#include "XOnline/5849.inl"

// ******************************************************************
// * XONLINES_OOVPA
// ******************************************************************
OOVPATable XONLINES_OOVPA[] = {

    // XOnline section
    REGISTER_OOVPAS(CXo_XOnlineLogon, 4361, 4627, 4831, 5455, 5558, 5849),
    REGISTER_OOVPAS(XOnlineLogon, 4361),
    REGISTER_OOVPAS(XoUpdateLaunchNewImageInternal, 4627, 5659, 5788),
    
    // XNet section
    REGISTER_OOVPAS(XnInit, 4361),
    REGISTER_OOVPAS(WSAStartup, 4361),
    REGISTER_OOVPAS(XNetStartup, 4361),
    REGISTER_OOVPAS(XNetGetEthernetLinkStatus, 3911, 4627), //NOTE: Found in .text section, confirmed it is correct.
    REGISTER_OOVPAS(bind, 3911, 4627),
    REGISTER_OOVPAS(connect, 3911, 5120),
    REGISTER_OOVPAS(ioctlsocket, 3911, 4627),
    REGISTER_OOVPAS(listen, 3911, 4627),
    REGISTER_OOVPAS(recv, 3911),
    REGISTER_OOVPAS(send, 3911),
    REGISTER_OOVPAS(socket, 3911, 4627, 5455),
};

// ******************************************************************
// * XONLINES_OOVPA_COUNT
// ******************************************************************
#define XONLINES_OOVPA_COUNT XBSDB_ARRAY_SIZE(XONLINES_OOVPA)

#endif
