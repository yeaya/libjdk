#ifndef _com_sun_xml_internal_stream_Entity$ExternalEntity_h_
#define _com_sun_xml_internal_stream_Entity$ExternalEntity_h_
//$ class com.sun.xml.internal.stream.Entity$ExternalEntity
//$ extends com.sun.xml.internal.stream.Entity

#include <com/sun/xml/internal/stream/Entity.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLResourceIdentifier;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class Entity$ExternalEntity : public ::com::sun::xml::internal::stream::Entity {
	$class(Entity$ExternalEntity, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::Entity)
public:
	Entity$ExternalEntity();
	void init$();
	void init$($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* entityLocation, $String* notation, bool inExternalSubset);
	virtual void clear() override;
	virtual bool isExternal() override;
	virtual bool isUnparsed() override;
	virtual void setValues(::com::sun::xml::internal::stream::Entity* entity) override;
	virtual void setValues(::com::sun::xml::internal::stream::Entity$ExternalEntity* entity);
	::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* entityLocation = nullptr;
	$String* notation = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_Entity$ExternalEntity_h_