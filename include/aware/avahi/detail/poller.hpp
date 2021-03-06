#ifndef AWARE_DETAIL_AVAHI_POLLER_HPP
#define AWARE_DETAIL_AVAHI_POLLER_HPP

///////////////////////////////////////////////////////////////////////////////
//
// http://github.com/breese/aware
//
// Copyright (C) 2013 Bjorn Reese <breese@users.sourceforge.net>
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
//
///////////////////////////////////////////////////////////////////////////////

#include <avahi-common/watch.h>
#include <boost/asio/io_service.hpp>

namespace aware
{
namespace avahi
{
namespace detail
{

class poller : public ::AvahiPoll
{
public:
    poller(boost::asio::io_service&);

    boost::asio::io_service& get_io_service() const;

private:
    boost::asio::io_service& io;
};

} // namespace avahi
} // namespace detail
} // namespace aware

#endif // AWARE_DETAIL_AVAHI_POLLER_HPP
