#include <javax/swing/text/GlyphView$JustificationInfo.h>
#include <java/util/BitSet.h>
#include <javax/swing/text/GlyphView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;

namespace javax {
	namespace swing {
		namespace text {

void GlyphView$JustificationInfo::init$(int32_t start, int32_t end, int32_t leadingSpaces, int32_t contentSpaces, int32_t trailingSpaces, bool hasTab, $BitSet* spaceMap) {
	this->start = start;
	this->end = end;
	this->leadingSpaces = leadingSpaces;
	this->contentSpaces = contentSpaces;
	this->trailingSpaces = trailingSpaces;
	this->hasTab = hasTab;
	$set(this, spaceMap, spaceMap);
}

GlyphView$JustificationInfo::GlyphView$JustificationInfo() {
}

$Class* GlyphView$JustificationInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, start)},
		{"end", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, end)},
		{"leadingSpaces", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, leadingSpaces)},
		{"contentSpaces", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, contentSpaces)},
		{"trailingSpaces", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, trailingSpaces)},
		{"hasTab", "Z", nullptr, $FINAL, $field(GlyphView$JustificationInfo, hasTab)},
		{"spaceMap", "Ljava/util/BitSet;", nullptr, $FINAL, $field(GlyphView$JustificationInfo, spaceMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IIIIIZLjava/util/BitSet;)V", nullptr, 0, $method(GlyphView$JustificationInfo, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, bool, $BitSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.GlyphView$JustificationInfo", "javax.swing.text.GlyphView", "JustificationInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.GlyphView$JustificationInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.GlyphView"
	};
	$loadClass(GlyphView$JustificationInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GlyphView$JustificationInfo);
	});
	return class$;
}

$Class* GlyphView$JustificationInfo::class$ = nullptr;

		} // text
	} // swing
} // javax