#ifndef _sun_net_httpserver_UnmodifiableHeaders_h_
#define _sun_net_httpserver_UnmodifiableHeaders_h_
//$ class sun.net.httpserver.UnmodifiableHeaders
//$ extends com.sun.net.httpserver.Headers

#include <com/sun/net/httpserver/Headers.h>

namespace java {
	namespace util {
		class Collection;
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class UnmodifiableHeaders : public ::com::sun::net::httpserver::Headers {
	$class(UnmodifiableHeaders, $NO_CLASS_INIT, ::com::sun::net::httpserver::Headers)
public:
	UnmodifiableHeaders();
	void init$(::com::sun::net::httpserver::Headers* headers);
	virtual void add($String* key, $String* value) override;
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(Object$* key) override;
	virtual $String* getFirst($String* key) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	static void lambda$new$0(::com::sun::net::httpserver::Headers* unmodHeaders, $String* k, ::java::util::List* v);
	virtual ::java::util::List* put($String* key, ::java::util::List* value) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	using ::com::sun::net::httpserver::Headers::remove;
	virtual $Object* remove(Object$* key) override;
	virtual ::java::util::List* replace($String* key, ::java::util::List* value);
	virtual bool replace($String* key, ::java::util::List* oldValue, ::java::util::List* newValue);
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual void set($String* key, $String* value) override;
	virtual int32_t size() override;
	virtual ::java::util::Collection* values() override;
	::com::sun::net::httpserver::Headers* headers = nullptr;
	::java::util::Map* map = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_UnmodifiableHeaders_h_