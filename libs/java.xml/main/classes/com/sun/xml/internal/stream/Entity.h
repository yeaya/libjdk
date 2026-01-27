#ifndef _com_sun_xml_internal_stream_Entity_h_
#define _com_sun_xml_internal_stream_Entity_h_
//$ class com.sun.xml.internal.stream.Entity
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class Entity : public ::java::lang::Object {
	$class(Entity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Entity();
	void init$();
	void init$($String* name, bool inExternalSubset);
	virtual void clear();
	virtual bool isEntityDeclInExternalSubset();
	virtual bool isExternal() {return false;}
	virtual bool isUnparsed() {return false;}
	virtual void setValues(::com::sun::xml::internal::stream::Entity* entity);
	$String* name = nullptr;
	bool inExternalSubset = false;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_Entity_h_