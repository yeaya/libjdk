#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$IndexedSegment.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$AccessibleJTextComponent$IndexedSegment::init$($JTextComponent$AccessibleJTextComponent* this$1) {
	$set(this, this$1, this$1);
	$Segment::init$();
}

JTextComponent$AccessibleJTextComponent$IndexedSegment::JTextComponent$AccessibleJTextComponent$IndexedSegment() {
}

$Class* JTextComponent$AccessibleJTextComponent$IndexedSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent$IndexedSegment, this$1)},
		{"modelOffset", "I", nullptr, $PUBLIC, $field(JTextComponent$AccessibleJTextComponent$IndexedSegment, modelOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;)V", nullptr, $PRIVATE, $method(JTextComponent$AccessibleJTextComponent$IndexedSegment, init$, void, $JTextComponent$AccessibleJTextComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment", "javax.swing.text.JTextComponent$AccessibleJTextComponent", "IndexedSegment", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment",
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
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$AccessibleJTextComponent$IndexedSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextComponent$AccessibleJTextComponent$IndexedSegment));
	});
	return class$;
}

$Class* JTextComponent$AccessibleJTextComponent$IndexedSegment::class$ = nullptr;

		} // text
	} // swing
} // javax