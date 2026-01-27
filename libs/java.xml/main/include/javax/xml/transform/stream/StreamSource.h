#ifndef _javax_xml_transform_stream_StreamSource_h_
#define _javax_xml_transform_stream_StreamSource_h_
//$ class javax.xml.transform.stream.StreamSource
//$ extends javax.xml.transform.Source

#include <javax/xml/transform/Source.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace java {
	namespace io {
		class File;
		class InputStream;
		class Reader;
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {

class $import StreamSource : public ::javax::xml::transform::Source {
	$class(StreamSource, 0, ::javax::xml::transform::Source)
public:
	StreamSource();
	void init$();
	void init$(::java::io::InputStream* inputStream);
	void init$(::java::io::InputStream* inputStream, $String* systemId);
	void init$(::java::io::Reader* reader);
	void init$(::java::io::Reader* reader, $String* systemId);
	void init$($String* systemId);
	void init$(::java::io::File* f);
	virtual ::java::io::InputStream* getInputStream();
	virtual $String* getPublicId();
	virtual ::java::io::Reader* getReader();
	virtual $String* getSystemId() override;
	virtual bool isEmpty() override;
	bool isStreamEmpty();
	virtual void setInputStream(::java::io::InputStream* inputStream);
	virtual void setPublicId($String* publicId);
	virtual void setReader(::java::io::Reader* reader);
	virtual void setSystemId($String* systemId) override;
	virtual void setSystemId(::java::io::File* f);
	static $String* FEATURE;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	::java::io::InputStream* inputStream = nullptr;
	::java::io::Reader* reader = nullptr;
};

			} // stream
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_stream_StreamSource_h_