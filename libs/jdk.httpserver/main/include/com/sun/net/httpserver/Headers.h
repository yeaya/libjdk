#ifndef _com_sun_net_httpserver_Headers_h_
#define _com_sun_net_httpserver_Headers_h_
//$ class com.sun.net.httpserver.Headers
//$ extends java.util.Map

#include <java/util/Map.h>

namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class List;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

class $import Headers : public ::java::util::Map {
	$class(Headers, $NO_CLASS_INIT, ::java::util::Map)
public:
	Headers();
	void init$();
	virtual void add($String* key, $String* value);
	static void checkValue($String* value);
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(Object$* key) override;
	virtual $String* getFirst($String* key);
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	$String* normalize($String* key);
	virtual ::java::util::List* put($String* key, ::java::util::List* value);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* key) override;
	virtual void set($String* key, $String* value);
	virtual int32_t size() override;
	virtual ::java::util::Collection* values() override;
	::java::util::HashMap* map = nullptr;
};

			} // httpserver
		} // net
	} // sun
} // com

#endif // _com_sun_net_httpserver_Headers_h_