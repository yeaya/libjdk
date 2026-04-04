#include <javax/xml/transform/stream/StreamResult.h>
#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/net/URI.h>
#include <jcpp.h>

#undef FEATURE

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {

$String* StreamResult::FEATURE = nullptr;

void StreamResult::init$() {
}

void StreamResult::init$($OutputStream* outputStream) {
	setOutputStream(outputStream);
}

void StreamResult::init$($Writer* writer) {
	setWriter(writer);
}

void StreamResult::init$($String* systemId) {
	$set(this, systemId, systemId);
}

void StreamResult::init$($File* f) {
	$useLocalObjectStack();
	setSystemId($($$nc($nc(f)->toURI())->toASCIIString()));
}

void StreamResult::setOutputStream($OutputStream* outputStream) {
	$set(this, outputStream, outputStream);
}

$OutputStream* StreamResult::getOutputStream() {
	return this->outputStream;
}

void StreamResult::setWriter($Writer* writer) {
	$set(this, writer, writer);
}

$Writer* StreamResult::getWriter() {
	return this->writer;
}

void StreamResult::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

void StreamResult::setSystemId($File* f) {
	$set(this, systemId, $$nc($nc(f)->toURI())->toASCIIString());
}

$String* StreamResult::getSystemId() {
	return this->systemId;
}

StreamResult::StreamResult() {
}

void StreamResult::clinit$($Class* clazz) {
	$assignStatic(StreamResult::FEATURE, "http://javax.xml.transform.stream.StreamResult/feature"_s);
}

$Class* StreamResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StreamResult, FEATURE)},
		{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StreamResult, systemId)},
		{"outputStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(StreamResult, outputStream)},
		{"writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(StreamResult, writer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StreamResult, init$, void)},
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(StreamResult, init$, void, $OutputStream*)},
		{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(StreamResult, init$, void, $Writer*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StreamResult, init$, void, $String*)},
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(StreamResult, init$, void, $File*)},
		{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(StreamResult, getOutputStream, $OutputStream*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StreamResult, getSystemId, $String*)},
		{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(StreamResult, getWriter, $Writer*)},
		{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(StreamResult, setOutputStream, void, $OutputStream*)},
		{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StreamResult, setSystemId, void, $String*)},
		{"setSystemId", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(StreamResult, setSystemId, void, $File*)},
		{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(StreamResult, setWriter, void, $Writer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.transform.stream.StreamResult",
		"java.lang.Object",
		"javax.xml.transform.Result",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamResult, name, initialize, &classInfo$$, StreamResult::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StreamResult);
	});
	return class$;
}

$Class* StreamResult::class$ = nullptr;

			} // stream
		} // transform
	} // xml
} // javax