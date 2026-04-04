#include <jdk/internal/net/http/hpack/IndexNameValueWriter.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/HeaderTable.h>
#include <jdk/internal/net/http/hpack/IntegerWriter.h>
#include <jdk/internal/net/http/hpack/StringWriter.h>
#include <jcpp.h>

#undef NAME_PART_WRITTEN
#undef NEW
#undef VALUE_WRITTEN

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HeaderTable = ::jdk::internal::net::http::hpack::HeaderTable;
using $IntegerWriter = ::jdk::internal::net::http::hpack::IntegerWriter;
using $StringWriter = ::jdk::internal::net::http::hpack::StringWriter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void IndexNameValueWriter::init$(int32_t pattern, int32_t prefix) {
	$set(this, intWriter, $new($IntegerWriter));
	$set(this, nameWriter, $new($StringWriter));
	$set(this, valueWriter, $new($StringWriter));
	this->state = IndexNameValueWriter::NEW;
	this->pattern = pattern;
	this->prefix = prefix;
}

IndexNameValueWriter* IndexNameValueWriter::index(int32_t index) {
	this->indexedRepresentation = true;
	this->intWriter->configure(index, this->prefix, this->pattern);
	return this;
}

IndexNameValueWriter* IndexNameValueWriter::name($CharSequence* name, bool useHuffman) {
	this->indexedRepresentation = false;
	this->intWriter->configure(0, this->prefix, this->pattern);
	this->nameWriter->configure(name, useHuffman);
	return this;
}

IndexNameValueWriter* IndexNameValueWriter::value($CharSequence* value, bool useHuffman) {
	this->valueWriter->configure(value, useHuffman);
	return this;
}

bool IndexNameValueWriter::write($HeaderTable* table, $ByteBuffer* destination) {
	if (this->state < IndexNameValueWriter::NAME_PART_WRITTEN) {
		if (this->indexedRepresentation) {
			if (!this->intWriter->write(destination)) {
				return false;
			}
		} else {
			bool var$0 = !this->intWriter->write(destination);
			if (var$0 || !this->nameWriter->write(destination)) {
				return false;
			}
		}
		this->state = IndexNameValueWriter::NAME_PART_WRITTEN;
	}
	if (this->state < IndexNameValueWriter::VALUE_WRITTEN) {
		if (!this->valueWriter->write(destination)) {
			return false;
		}
		this->state = IndexNameValueWriter::VALUE_WRITTEN;
	}
	return this->state == IndexNameValueWriter::VALUE_WRITTEN;
}

IndexNameValueWriter* IndexNameValueWriter::reset() {
	this->intWriter->reset();
	if (!this->indexedRepresentation) {
		this->nameWriter->reset();
	}
	this->valueWriter->reset();
	this->state = IndexNameValueWriter::NEW;
	return this;
}

IndexNameValueWriter::IndexNameValueWriter() {
}

$Class* IndexNameValueWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pattern", "I", nullptr, $PRIVATE | $FINAL, $field(IndexNameValueWriter, pattern)},
		{"prefix", "I", nullptr, $PRIVATE | $FINAL, $field(IndexNameValueWriter, prefix)},
		{"intWriter", "Ljdk/internal/net/http/hpack/IntegerWriter;", nullptr, $PRIVATE | $FINAL, $field(IndexNameValueWriter, intWriter)},
		{"nameWriter", "Ljdk/internal/net/http/hpack/StringWriter;", nullptr, $PRIVATE | $FINAL, $field(IndexNameValueWriter, nameWriter)},
		{"valueWriter", "Ljdk/internal/net/http/hpack/StringWriter;", nullptr, $PRIVATE | $FINAL, $field(IndexNameValueWriter, valueWriter)},
		{"indexedRepresentation", "Z", nullptr, $PROTECTED, $field(IndexNameValueWriter, indexedRepresentation)},
		{"NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexNameValueWriter, NEW)},
		{"NAME_PART_WRITTEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexNameValueWriter, NAME_PART_WRITTEN)},
		{"VALUE_WRITTEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexNameValueWriter, VALUE_WRITTEN)},
		{"state", "I", nullptr, $PRIVATE, $field(IndexNameValueWriter, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PROTECTED, $method(IndexNameValueWriter, init$, void, int32_t, int32_t)},
		{"index", "(I)Ljdk/internal/net/http/hpack/IndexNameValueWriter;", nullptr, 0, $virtualMethod(IndexNameValueWriter, index, IndexNameValueWriter*, int32_t)},
		{"name", "(Ljava/lang/CharSequence;Z)Ljdk/internal/net/http/hpack/IndexNameValueWriter;", nullptr, 0, $virtualMethod(IndexNameValueWriter, name, IndexNameValueWriter*, $CharSequence*, bool)},
		{"reset", "()Ljdk/internal/net/http/hpack/IndexNameValueWriter;", nullptr, $PUBLIC, $virtualMethod(IndexNameValueWriter, reset, IndexNameValueWriter*)},
		{"value", "(Ljava/lang/CharSequence;Z)Ljdk/internal/net/http/hpack/IndexNameValueWriter;", nullptr, 0, $virtualMethod(IndexNameValueWriter, value, IndexNameValueWriter*, $CharSequence*, bool)},
		{"write", "(Ljdk/internal/net/http/hpack/HeaderTable;Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC, $virtualMethod(IndexNameValueWriter, write, bool, $HeaderTable*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.hpack.IndexNameValueWriter",
		"java.lang.Object",
		"jdk.internal.net.http.hpack.BinaryRepresentationWriter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IndexNameValueWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndexNameValueWriter);
	});
	return class$;
}

$Class* IndexNameValueWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk