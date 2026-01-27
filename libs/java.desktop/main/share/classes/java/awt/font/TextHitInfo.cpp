#include <java/awt/font/TextHitInfo.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextHitInfo_FieldInfo_[] = {
	{"charIndex", "I", nullptr, $PRIVATE, $field(TextHitInfo, charIndex)},
	{"isLeadingEdge", "Z", nullptr, $PRIVATE, $field(TextHitInfo, isLeadingEdge$)},
	{}
};

$MethodInfo _TextHitInfo_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, $PRIVATE, $method(TextHitInfo, init$, void, int32_t, bool)},
	{"afterOffset", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextHitInfo, afterOffset, TextHitInfo*, int32_t)},
	{"beforeOffset", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextHitInfo, beforeOffset, TextHitInfo*, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TextHitInfo, equals, bool, Object$*)},
	{"equals", "(Ljava/awt/font/TextHitInfo;)Z", nullptr, $PUBLIC, $method(TextHitInfo, equals, bool, TextHitInfo*)},
	{"getCharIndex", "()I", nullptr, $PUBLIC, $method(TextHitInfo, getCharIndex, int32_t)},
	{"getInsertionIndex", "()I", nullptr, $PUBLIC, $method(TextHitInfo, getInsertionIndex, int32_t)},
	{"getOffsetHit", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(TextHitInfo, getOffsetHit, TextHitInfo*, int32_t)},
	{"getOtherHit", "()Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(TextHitInfo, getOtherHit, TextHitInfo*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(TextHitInfo, hashCode, int32_t)},
	{"isLeadingEdge", "()Z", nullptr, $PUBLIC, $method(TextHitInfo, isLeadingEdge, bool)},
	{"leading", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextHitInfo, leading, TextHitInfo*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextHitInfo, toString, $String*)},
	{"trailing", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextHitInfo, trailing, TextHitInfo*, int32_t)},
	{}
};

$ClassInfo _TextHitInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.TextHitInfo",
	"java.lang.Object",
	nullptr,
	_TextHitInfo_FieldInfo_,
	_TextHitInfo_MethodInfo_
};

$Object* allocate$TextHitInfo($Class* clazz) {
	return $of($alloc(TextHitInfo));
}

void TextHitInfo::init$(int32_t charIndex, bool isLeadingEdge) {
	this->charIndex = charIndex;
	this->isLeadingEdge$ = isLeadingEdge;
}

int32_t TextHitInfo::getCharIndex() {
	return this->charIndex;
}

bool TextHitInfo::isLeadingEdge() {
	return this->isLeadingEdge$;
}

int32_t TextHitInfo::getInsertionIndex() {
	return this->isLeadingEdge$ ? this->charIndex : this->charIndex + 1;
}

int32_t TextHitInfo::hashCode() {
	return this->charIndex;
}

bool TextHitInfo::equals(Object$* obj) {
	return ($instanceOf(TextHitInfo, obj)) && equals($cast(TextHitInfo, obj));
}

bool TextHitInfo::equals(TextHitInfo* hitInfo) {
	return hitInfo != nullptr && this->charIndex == hitInfo->charIndex && this->isLeadingEdge$ == hitInfo->isLeadingEdge$;
}

$String* TextHitInfo::toString() {
	return $str({"TextHitInfo["_s, $$str(this->charIndex), (this->isLeadingEdge$ ? "L"_s : "T"_s), "]"_s});
}

TextHitInfo* TextHitInfo::leading(int32_t charIndex) {
	return $new(TextHitInfo, charIndex, true);
}

TextHitInfo* TextHitInfo::trailing(int32_t charIndex) {
	return $new(TextHitInfo, charIndex, false);
}

TextHitInfo* TextHitInfo::beforeOffset(int32_t offset) {
	return $new(TextHitInfo, offset - 1, false);
}

TextHitInfo* TextHitInfo::afterOffset(int32_t offset) {
	return $new(TextHitInfo, offset, true);
}

TextHitInfo* TextHitInfo::getOtherHit() {
	if (this->isLeadingEdge$) {
		return trailing(this->charIndex - 1);
	} else {
		return leading(this->charIndex + 1);
	}
}

TextHitInfo* TextHitInfo::getOffsetHit(int32_t delta) {
	return $new(TextHitInfo, this->charIndex + delta, this->isLeadingEdge$);
}

TextHitInfo::TextHitInfo() {
}

$Class* TextHitInfo::load$($String* name, bool initialize) {
	$loadClass(TextHitInfo, name, initialize, &_TextHitInfo_ClassInfo_, allocate$TextHitInfo);
	return class$;
}

$Class* TextHitInfo::class$ = nullptr;

		} // font
	} // awt
} // java