#include <javax/swing/text/rtf/RTFReader$DocumentDestination.h>
#include <java/lang/InternalError.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>
#include <javax/swing/text/rtf/RTFReader$TextHandlingDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$TextHandlingDestination = ::javax::swing::text::rtf::RTFReader$TextHandlingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFReader$DocumentDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$TextHandlingDestination::init$(this$0);
}

void RTFReader$DocumentDestination::deliverText($String* text, $AttributeSet* characterAttributes) {
	$useLocalObjectStack();
	try {
		int32_t var$0 = $nc(this->this$0->target)->getLength();
		$nc(this->this$0->target)->insertString(var$0, text, $(currentTextAttributes()));
	} catch ($BadLocationException& ble) {
		$throwNew($InternalError, $(ble->getMessage()), ble);
	}
}

void RTFReader$DocumentDestination::finishParagraph($AttributeSet* pgfAttributes, $AttributeSet* chrAttributes) {
	int32_t pgfEndPosition = $nc(this->this$0->target)->getLength();
	try {
		$nc(this->this$0->target)->insertString(pgfEndPosition, "\n"_s, chrAttributes);
		$nc(this->this$0->target)->setParagraphAttributes(pgfEndPosition, 1, pgfAttributes, true);
	} catch ($BadLocationException& ble) {
		$throwNew($InternalError, $(ble->getMessage()), ble);
	}
}

void RTFReader$DocumentDestination::endSection() {
}

RTFReader$DocumentDestination::RTFReader$DocumentDestination() {
}

$Class* RTFReader$DocumentDestination::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$DocumentDestination, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, 0, $method(RTFReader$DocumentDestination, init$, void, $RTFReader*)},
		{"deliverText", "(Ljava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(RTFReader$DocumentDestination, deliverText, void, $String*, $AttributeSet*)},
		{"endSection", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader$DocumentDestination, endSection, void)},
		{"finishParagraph", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(RTFReader$DocumentDestination, finishParagraph, void, $AttributeSet*, $AttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFReader$DocumentDestination", "javax.swing.text.rtf.RTFReader", "DocumentDestination", 0},
		{"javax.swing.text.rtf.RTFReader$TextHandlingDestination", "javax.swing.text.rtf.RTFReader", "TextHandlingDestination", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.rtf.RTFReader$DocumentDestination",
		"javax.swing.text.rtf.RTFReader$TextHandlingDestination",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.rtf.RTFReader"
	};
	$loadClass(RTFReader$DocumentDestination, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFReader$DocumentDestination);
	});
	return class$;
}

$Class* RTFReader$DocumentDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax