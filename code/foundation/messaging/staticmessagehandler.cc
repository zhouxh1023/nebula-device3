//------------------------------------------------------------------------------
//  staticmessagehandler.cc
//  (C) 2009 Radon Labs GmbH
//------------------------------------------------------------------------------
#include "stdneb.h"
#include "messaging/staticmessagehandler.h"

namespace Messaging
{
//------------------------------------------------------------------------------
/**
*/
template<> void
StaticMessageHandler::Dispatch(const Ptr<Core::RefCounted>& obj, const Ptr<Message>& msg)
{
    n_error("StaticMessageHandler: Unhandled message (objclass=%s, msgclass=%s)!\n", 
        obj->GetClassName().AsCharPtr(), msg->GetClassName().AsCharPtr());
}

} // namespace Messaging
