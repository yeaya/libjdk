#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo$EncodingImpl.h>

#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding.h>
#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef RANGE

using $EncodingInfo = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo;
using $EncodingInfo$InEncoding = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _EncodingInfo$EncodingImpl_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;", nullptr, $FINAL | $SYNTHETIC, $field(EncodingInfo$EncodingImpl, this$0)},
	{"m_encoding", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_encoding)},
	{"m_first", "I", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_first)},
	{"m_explFirst", "I", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_explFirst)},
	{"m_explLast", "I", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_explLast)},
	{"m_last", "I", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_last)},
	{"m_before", "Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding;", nullptr, $PRIVATE, $field(EncodingInfo$EncodingImpl, m_before)},
	{"m_after", "Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding;", nullptr, $PRIVATE, $field(EncodingInfo$EncodingImpl, m_after)},
	{"RANGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EncodingInfo$EncodingImpl, RANGE)},
	{"m_alreadyKnown", "[Z", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_alreadyKnown)},
	{"m_isInEncoding", "[Z", nullptr, $PRIVATE | $FINAL, $field(EncodingInfo$EncodingImpl, m_isInEncoding)},
	{}
};

$MethodInfo _EncodingInfo$EncodingImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;)V", nullptr, $PRIVATE, $method(EncodingInfo$EncodingImpl, init$, void, $EncodingInfo*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;Ljava/lang/String;III)V", nullptr, $PRIVATE, $method(EncodingInfo$EncodingImpl, init$, void, $EncodingInfo*, $String*, int32_t, int32_t, int32_t)},
	{"isInEncoding", "(C)Z", nullptr, $PUBLIC, $virtualMethod(EncodingInfo$EncodingImpl, isInEncoding, bool, char16_t)},
	{"isInEncoding", "(CC)Z", nullptr, $PUBLIC, $virtualMethod(EncodingInfo$EncodingImpl, isInEncoding, bool, char16_t, char16_t)},
	{}
};

$InnerClassInfo _EncodingInfo$EncodingImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.EncodingInfo$EncodingImpl", "com.sun.org.apache.xml.internal.serializer.EncodingInfo", "EncodingImpl", $PRIVATE},
	{"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding", "com.sun.org.apache.xml.internal.serializer.EncodingInfo", "InEncoding", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EncodingInfo$EncodingImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo$EncodingImpl",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding",
	_EncodingInfo$EncodingImpl_FieldInfo_,
	_EncodingInfo$EncodingImpl_MethodInfo_,
	nullptr,
	nullptr,
	_EncodingInfo$EncodingImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo"
};

$Object* allocate$EncodingInfo$EncodingImpl($Class* clazz) {
	return $of($alloc(EncodingInfo$EncodingImpl));
}

bool EncodingInfo$EncodingImpl::isInEncoding(char16_t ch1) {
	bool ret = false;
	int32_t codePoint = $Encodings::toCodePoint(ch1);
	if (codePoint < this->m_explFirst) {
		if (this->m_before == nullptr) {
			$set(this, m_before, $new(EncodingInfo$EncodingImpl, this->this$0, this->m_encoding, this->m_first, this->m_explFirst - 1, codePoint));
		}
		ret = $nc(this->m_before)->isInEncoding(ch1);
	} else if (this->m_explLast < codePoint) {
		if (this->m_after == nullptr) {
			$set(this, m_after, $new(EncodingInfo$EncodingImpl, this->this$0, this->m_encoding, this->m_explLast + 1, this->m_last, codePoint));
		}
		ret = $nc(this->m_after)->isInEncoding(ch1);
	} else {
		int32_t idx = codePoint - this->m_explFirst;
		if ($nc(this->m_alreadyKnown)->get(idx)) {
			ret = $nc(this->m_isInEncoding)->get(idx);
		} else {
			ret = $EncodingInfo::inEncoding(ch1, this->m_encoding);
			$nc(this->m_alreadyKnown)->set(idx, true);
			$nc(this->m_isInEncoding)->set(idx, ret);
		}
	}
	return ret;
}

bool EncodingInfo$EncodingImpl::isInEncoding(char16_t high, char16_t low) {
	bool ret = false;
	int32_t codePoint = $Encodings::toCodePoint(high, low);
	if (codePoint < this->m_explFirst) {
		if (this->m_before == nullptr) {
			$set(this, m_before, $new(EncodingInfo$EncodingImpl, this->this$0, this->m_encoding, this->m_first, this->m_explFirst - 1, codePoint));
		}
		ret = $nc(this->m_before)->isInEncoding(high, low);
	} else if (this->m_explLast < codePoint) {
		if (this->m_after == nullptr) {
			$set(this, m_after, $new(EncodingInfo$EncodingImpl, this->this$0, this->m_encoding, this->m_explLast + 1, this->m_last, codePoint));
		}
		ret = $nc(this->m_after)->isInEncoding(high, low);
	} else {
		int32_t idx = codePoint - this->m_explFirst;
		if ($nc(this->m_alreadyKnown)->get(idx)) {
			ret = $nc(this->m_isInEncoding)->get(idx);
		} else {
			ret = $EncodingInfo::inEncoding(high, low, this->m_encoding);
			$nc(this->m_alreadyKnown)->set(idx, true);
			$nc(this->m_isInEncoding)->set(idx, ret);
		}
	}
	return ret;
}

void EncodingInfo$EncodingImpl::init$($EncodingInfo* this$0) {
	EncodingInfo$EncodingImpl::init$(this$0, this$0->javaName, 0, $Integer::MAX_VALUE, (char16_t)0);
}

void EncodingInfo$EncodingImpl::init$($EncodingInfo* this$0, $String* encoding, int32_t first, int32_t last, int32_t codePoint) {
	$set(this, this$0, this$0);
	$set(this, m_alreadyKnown, $new($booleans, EncodingInfo$EncodingImpl::RANGE));
	$set(this, m_isInEncoding, $new($booleans, EncodingInfo$EncodingImpl::RANGE));
	this->m_first = first;
	this->m_last = last;
	this->m_explFirst = $div(codePoint, EncodingInfo$EncodingImpl::RANGE) * EncodingInfo$EncodingImpl::RANGE;
	this->m_explLast = this->m_explFirst + (EncodingInfo$EncodingImpl::RANGE - 1);
	$set(this, m_encoding, encoding);
	if (this$0->javaName != nullptr) {
		if (0 <= this->m_explFirst && this->m_explFirst <= 127) {
			bool var$5 = "UTF8"_s->equals(this$0->javaName);
			bool var$4 = var$5 || "UTF-16"_s->equals(this$0->javaName);
			bool var$3 = var$4 || "ASCII"_s->equals(this$0->javaName);
			bool var$2 = var$3 || "US-ASCII"_s->equals(this$0->javaName);
			bool var$1 = var$2 || "Unicode"_s->equals(this$0->javaName);
			bool var$0 = var$1 || "UNICODE"_s->equals(this$0->javaName);
			if (var$0 || $nc(this$0->javaName)->startsWith("ISO8859"_s)) {
				for (int32_t unicode = 1; unicode < 127; ++unicode) {
					int32_t idx = unicode - this->m_explFirst;
					if (0 <= idx && idx < EncodingInfo$EncodingImpl::RANGE) {
						$nc(this->m_alreadyKnown)->set(idx, true);
						$nc(this->m_isInEncoding)->set(idx, true);
					}
				}
			}
		}
		if (this$0->javaName == nullptr) {
			for (int32_t idx = 0; idx < $nc(this->m_alreadyKnown)->length; ++idx) {
				$nc(this->m_alreadyKnown)->set(idx, true);
				$nc(this->m_isInEncoding)->set(idx, true);
			}
		}
	}
}

EncodingInfo$EncodingImpl::EncodingInfo$EncodingImpl() {
}

$Class* EncodingInfo$EncodingImpl::load$($String* name, bool initialize) {
	$loadClass(EncodingInfo$EncodingImpl, name, initialize, &_EncodingInfo$EncodingImpl_ClassInfo_, allocate$EncodingInfo$EncodingImpl);
	return class$;
}

$Class* EncodingInfo$EncodingImpl::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com