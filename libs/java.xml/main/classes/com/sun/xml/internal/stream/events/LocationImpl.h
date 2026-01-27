#ifndef _com_sun_xml_internal_stream_events_LocationImpl_h_
#define _com_sun_xml_internal_stream_events_LocationImpl_h_
//$ class com.sun.xml.internal.stream.events.LocationImpl
//$ extends javax.xml.stream.Location

#include <javax/xml/stream/Location.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class LocationImpl : public ::javax::xml::stream::Location {
	$class(LocationImpl, $NO_CLASS_INIT, ::javax::xml::stream::Location)
public:
	LocationImpl();
	void init$(::javax::xml::stream::Location* loc);
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* toString() override;
	$String* systemId = nullptr;
	$String* publicId = nullptr;
	int32_t colNo = 0;
	int32_t lineNo = 0;
	int32_t charOffset = 0;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_LocationImpl_h_