#ifndef _javax_xml_transform_stream_StreamResult_h_
#define _javax_xml_transform_stream_StreamResult_h_
//$ class javax.xml.transform.stream.StreamResult
//$ extends javax.xml.transform.Result

#include <javax/xml/transform/Result.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace java {
	namespace io {
		class File;
		class OutputStream;
		class Writer;
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {

class $import StreamResult : public ::javax::xml::transform::Result {
	$class(StreamResult, 0, ::javax::xml::transform::Result)
public:
	StreamResult();
	void init$();
	void init$(::java::io::OutputStream* outputStream);
	void init$(::java::io::Writer* writer);
	void init$($String* systemId);
	void init$(::java::io::File* f);
	virtual ::java::io::OutputStream* getOutputStream();
	virtual $String* getSystemId() override;
	virtual ::java::io::Writer* getWriter();
	virtual void setOutputStream(::java::io::OutputStream* outputStream);
	virtual void setSystemId($String* systemId) override;
	virtual void setSystemId(::java::io::File* f);
	virtual void setWriter(::java::io::Writer* writer);
	static $String* FEATURE;
	$String* systemId = nullptr;
	::java::io::OutputStream* outputStream = nullptr;
	::java::io::Writer* writer = nullptr;
};

			} // stream
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_stream_StreamResult_h_