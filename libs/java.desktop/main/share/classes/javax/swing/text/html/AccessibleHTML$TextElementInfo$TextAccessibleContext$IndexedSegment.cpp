#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Segment = ::javax::swing::text::Segment;
using $AccessibleHTML$TextElementInfo$TextAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::init$($AccessibleHTML$TextElementInfo$TextAccessibleContext* this$2) {
	$set(this, this$2, this$2);
	$Segment::init$();
}

AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment() {
}

$Class* AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$2", "Ljavax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, this$2)},
		{"modelOffset", "I", nullptr, $PUBLIC, $field(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, modelOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext;)V", nullptr, $PRIVATE, $method(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, init$, void, $AccessibleHTML$TextElementInfo$TextAccessibleContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.AccessibleHTML$TextElementInfo", "javax.swing.text.html.AccessibleHTML", "TextElementInfo", 0},
		{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "javax.swing.text.html.AccessibleHTML$TextElementInfo", "TextAccessibleContext", $PUBLIC},
		{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment", "javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "IndexedSegment", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment",
		"javax.swing.text.Segment",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.AccessibleHTML"
	};
	$loadClass(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment));
	});
	return class$;
}

$Class* AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax