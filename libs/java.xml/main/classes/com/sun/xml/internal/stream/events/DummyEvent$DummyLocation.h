#ifndef _com_sun_xml_internal_stream_events_DummyEvent$DummyLocation_h_
#define _com_sun_xml_internal_stream_events_DummyEvent$DummyLocation_h_
//$ class com.sun.xml.internal.stream.events.DummyEvent$DummyLocation
//$ extends javax.xml.stream.Location

#include <javax/xml/stream/Location.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class DummyEvent$DummyLocation : public ::javax::xml::stream::Location {
	$class(DummyEvent$DummyLocation, $NO_CLASS_INIT, ::javax::xml::stream::Location)
public:
	DummyEvent$DummyLocation();
	void init$();
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_DummyEvent$DummyLocation_h_