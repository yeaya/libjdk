#include <sun/tools/jar/Main$CRC32OutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/zip/CRC32.h>
#include <java/util/zip/ZipEntry.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

#undef STORED

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRC32 = ::java::util::zip::CRC32;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace sun {
	namespace tools {
		namespace jar {

void Main$CRC32OutputStream::init$() {
	$OutputStream::init$();
	$set(this, crc, $new($CRC32));
	this->n = 0;
}

void Main$CRC32OutputStream::write(int32_t r) {
	this->crc->update(r);
	++this->n;
}

void Main$CRC32OutputStream::write($bytes* b, int32_t off, int32_t len) {
	this->crc->update(b, off, len);
	this->n += len;
}

void Main$CRC32OutputStream::updateEntry($ZipEntry* e) {
	$nc(e)->setMethod($ZipEntry::STORED);
	e->setSize(this->n);
	e->setCrc(this->crc->getValue());
}

Main$CRC32OutputStream::Main$CRC32OutputStream() {
}

$Class* Main$CRC32OutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"crc", "Ljava/util/zip/CRC32;", nullptr, $FINAL, $field(Main$CRC32OutputStream, crc)},
		{"n", "J", nullptr, 0, $field(Main$CRC32OutputStream, n)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Main$CRC32OutputStream, init$, void)},
		{"updateEntry", "(Ljava/util/zip/ZipEntry;)V", nullptr, $PUBLIC, $virtualMethod(Main$CRC32OutputStream, updateEntry, void, $ZipEntry*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Main$CRC32OutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(Main$CRC32OutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Main$CRC32OutputStream", "sun.tools.jar.Main", "CRC32OutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.Main$CRC32OutputStream",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.Main"
	};
	$loadClass(Main$CRC32OutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Main$CRC32OutputStream));
	});
	return class$;
}

$Class* Main$CRC32OutputStream::class$ = nullptr;

		} // jar
	} // tools
} // sun