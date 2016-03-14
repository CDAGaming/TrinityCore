/*
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef AccountService_h__
#define AccountService_h__

#include "Common.h"
#include "account_service.pb.h"

namespace pb = google::protobuf;

namespace Battlenet
{
    class Session;

    namespace Service
    {
        class Account : public account::AccountService
        {
        public:
            Account(Session* session);

            uint32 HandleGetAccountState(account::GetAccountStateRequest const* request, account::GetAccountStateResponse* response) override;
            uint32 HandleGetGameAccountState(account::GetGameAccountStateRequest const* request, account::GetGameAccountStateResponse* response) override;
        };
    }
}

#endif // AccountService_h__
