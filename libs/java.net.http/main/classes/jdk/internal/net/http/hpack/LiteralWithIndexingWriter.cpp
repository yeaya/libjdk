#include <jdk/internal/net/http/hpack/LiteralWithIndexingWriter.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/HeaderTable.h>
#include <jdk/internal/net/http/hpack/IndexNameValueWriter.h>
#include <jdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HeaderTable = ::jdk::internal::net::http::hpack::HeaderTable;
using $IndexNameValueWriter = ::jdk::internal::net::http::hpack::IndexNameValueWriter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void LiteralWithIndexingWriter::init$() {
	$IndexNameValueWriter::init$(64, 6);
}

LiteralWithIndexingWriter* LiteralWithIndexingWriter::index(int32_t index) {
	$IndexNameValueWriter::index(index);
	this->index$ = index;
	return this;
}

LiteralWithIndexingWriter* LiteralWithIndexingWriter::name($CharSequence* name, bool useHuffman) {
	$IndexNameValueWriter::name(name, useHuffman);
	$set(this, name$, name);
	return this;
}

LiteralWithIndexingWriter* LiteralWithIndexingWriter::value($CharSequence* value, bool useHuffman) {
	$IndexNameValueWriter::value(value, useHuffman);
	$set(this, value$, value);
	return this;
}

bool LiteralWithIndexingWriter::write($HeaderTable* table, $ByteBuffer* destination) {
	$useLocalObjectStack();
	if (!this->tableUpdated) {
		$var($CharSequence, n, nullptr);
		if (this->indexedRepresentation) {
			$assign(n, $nc($($nc(table)->get(this->index$)))->name);
		} else {
			$assign(n, this->name$);
		}
		$nc(table)->put(n, this->value$);
		this->tableUpdated = true;
	}
	return $IndexNameValueWriter::write(table, destination);
}

$IndexNameValueWriter* LiteralWithIndexingWriter::reset() {
	this->tableUpdated = false;
	$set(this, name$, nullptr);
	$set(this, value$, nullptr);
	this->index$ = -1;
	return $IndexNameValueWriter::reset();
}

LiteralWithIndexingWriter::LiteralWithIndexingWriter() {
}

$Class* LiteralWithIndexingWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tableUpdated", "Z", nullptr, $PRIVATE, $field(LiteralWithIndexingWriter, tableUpdated)},
		{"name", "Ljava/lang/CharSequence;", nullptr, $PRIVATE, $field(LiteralWithIndexingWriter, name$)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PRIVATE, $field(LiteralWithIndexingWriter, value$)},
		{"index", "I", nullptr, $PRIVATE, $field(LiteralWithIndexingWriter, index$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LiteralWithIndexingWriter, init$, void)},
		{"index", "(I)Ljdk/internal/net/http/hpack/LiteralWithIndexingWriter;", nullptr, 0, $virtualMethod(LiteralWithIndexingWriter, index, LiteralWithIndexingWriter*, int32_t)},
		{"name", "(Ljava/lang/CharSequence;Z)Ljdk/internal/net/http/hpack/LiteralWithIndexingWriter;", nullptr, 0, $virtualMethod(LiteralWithIndexingWriter, name, LiteralWithIndexingWriter*, $CharSequence*, bool)},
		{"reset", "()Ljdk/internal/net/http/hpack/IndexNameValueWriter;", nullptr, $PUBLIC, $virtualMethod(LiteralWithIndexingWriter, reset, $IndexNameValueWriter*)},
		{"value", "(Ljava/lang/CharSequence;Z)Ljdk/internal/net/http/hpack/LiteralWithIndexingWriter;", nullptr, 0, $virtualMethod(LiteralWithIndexingWriter, value, LiteralWithIndexingWriter*, $CharSequence*, bool)},
		{"write", "(Ljdk/internal/net/http/hpack/HeaderTable;Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $virtualMethod(LiteralWithIndexingWriter, write, bool, $HeaderTable*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.LiteralWithIndexingWriter",
		"jdk.internal.net.http.hpack.IndexNameValueWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LiteralWithIndexingWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LiteralWithIndexingWriter);
	});
	return class$;
}

$Class* LiteralWithIndexingWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk