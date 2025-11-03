#ifndef _sun_net_httpserver_ContextList_h_
#define _sun_net_httpserver_ContextList_h_
//$ class sun.net.httpserver.ContextList
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_CONTEXTS")
#undef MAX_CONTEXTS

namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class HttpContextImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ContextList : public ::java::lang::Object {
	$class(ContextList, 0, ::java::lang::Object)
public:
	ContextList();
	void init$();
	virtual void add(::sun::net::httpserver::HttpContextImpl* ctx);
	virtual ::sun::net::httpserver::HttpContextImpl* findContext($String* protocol, $String* path);
	virtual ::sun::net::httpserver::HttpContextImpl* findContext($String* protocol, $String* path, bool exact);
	virtual void remove($String* protocol, $String* path);
	virtual void remove(::sun::net::httpserver::HttpContextImpl* context);
	virtual int32_t size();
	static bool $assertionsDisabled;
	static const int32_t MAX_CONTEXTS = 50;
	::java::util::LinkedList* list = nullptr;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("MAX_CONTEXTS")

#endif // _sun_net_httpserver_ContextList_h_