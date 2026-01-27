#ifndef _com_sun_xml_internal_stream_Entity$ScannedEntity_h_
#define _com_sun_xml_internal_stream_Entity$ScannedEntity_h_
//$ class com.sun.xml.internal.stream.Entity$ScannedEntity
//$ extends com.sun.xml.internal.stream.Entity

#include <com/sun/xml/internal/stream/Entity.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE
#pragma push_macro("DEFAULT_INTERNAL_BUFFER_SIZE")
#undef DEFAULT_INTERNAL_BUFFER_SIZE
#pragma push_macro("DEFAULT_XMLDECL_BUFFER_SIZE")
#undef DEFAULT_XMLDECL_BUFFER_SIZE

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
namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class Entity$ScannedEntity : public ::com::sun::xml::internal::stream::Entity {
	$class(Entity$ScannedEntity, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::Entity)
public:
	Entity$ScannedEntity();
	void init$(bool isGE, $String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* entityLocation, ::java::io::InputStream* stream, ::java::io::Reader* reader, $String* encoding, bool literal, bool mayReadChunks, bool isExternal);
	virtual void close();
	virtual $String* getEncodingName();
	virtual ::java::io::InputStream* getEntityInputStream();
	virtual ::java::io::Reader* getEntityReader();
	virtual $String* getEntityVersion();
	virtual bool isDeclaredEncoding();
	virtual bool isEncodingExternallySpecified();
	virtual bool isExternal() override;
	virtual bool isUnparsed() override;
	virtual void setDeclaredEncoding(bool value);
	virtual void setEncodingExternallySpecified(bool value);
	virtual void setEntityVersion($String* version);
	virtual $String* toString() override;
	static const int32_t DEFAULT_BUFFER_SIZE = 8192;
	int32_t fBufferSize = 0;
	static const int32_t DEFAULT_XMLDECL_BUFFER_SIZE = 28;
	static const int32_t DEFAULT_INTERNAL_BUFFER_SIZE = 1024;
	::java::io::InputStream* stream = nullptr;
	::java::io::Reader* reader = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* entityLocation = nullptr;
	$String* encoding = nullptr;
	bool literal = false;
	bool isExternal$ = false;
	$String* version = nullptr;
	$chars* ch = nullptr;
	int32_t position = 0;
	int32_t count = 0;
	int32_t lineNumber = 0;
	int32_t columnNumber = 0;
	bool declaredEncoding = false;
	bool externallySpecifiedEncoding = false;
	$String* xmlVersion = nullptr;
	int32_t fTotalCountTillLastLoad = 0;
	int32_t fLastCount = 0;
	int32_t baseCharOffset = 0;
	int32_t startPosition = 0;
	bool mayReadChunks = false;
	bool xmlDeclChunkRead = false;
	bool isGE = false;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEFAULT_BUFFER_SIZE")
#pragma pop_macro("DEFAULT_INTERNAL_BUFFER_SIZE")
#pragma pop_macro("DEFAULT_XMLDECL_BUFFER_SIZE")

#endif // _com_sun_xml_internal_stream_Entity$ScannedEntity_h_