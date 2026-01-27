#ifndef _com_sun_xml_internal_stream_Entity$InternalEntity_h_
#define _com_sun_xml_internal_stream_Entity$InternalEntity_h_
//$ class com.sun.xml.internal.stream.Entity$InternalEntity
//$ extends com.sun.xml.internal.stream.Entity

#include <com/sun/xml/internal/stream/Entity.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class Entity$InternalEntity : public ::com::sun::xml::internal::stream::Entity {
	$class(Entity$InternalEntity, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::Entity)
public:
	Entity$InternalEntity();
	void init$();
	void init$($String* name, $String* text, bool inExternalSubset);
	virtual void clear() override;
	virtual bool isExternal() override;
	virtual bool isUnparsed() override;
	virtual void setValues(::com::sun::xml::internal::stream::Entity* entity) override;
	virtual void setValues(::com::sun::xml::internal::stream::Entity$InternalEntity* entity);
	$String* text = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_Entity$InternalEntity_h_