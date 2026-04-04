#include <javax/swing/text/rtf/RTFReader$TextHandlingDestination.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$AttributeTrackingDestination = ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFReader$TextHandlingDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$AttributeTrackingDestination::init$(this$0);
	this->inParagraph = false;
}

void RTFReader$TextHandlingDestination::handleText($String* text) {
	if (!this->inParagraph) {
		beginParagraph();
	}
	deliverText(text, $(currentTextAttributes()));
}

void RTFReader$TextHandlingDestination::close() {
	if (this->inParagraph) {
		endParagraph();
	}
	$RTFReader$AttributeTrackingDestination::close();
}

bool RTFReader$TextHandlingDestination::handleKeyword($String* keyword$renamed) {
	$var($String, keyword, keyword$renamed);
	bool var$0 = $nc(keyword)->equals("\r"_s);
	if (var$0 || keyword->equals("\n"_s)) {
		$assign(keyword, "par"_s);
	}
	if (keyword->equals("par"_s)) {
		endParagraph();
		return true;
	}
	if (keyword->equals("sect"_s)) {
		endSection();
		return true;
	}
	return $RTFReader$AttributeTrackingDestination::handleKeyword(keyword);
}

void RTFReader$TextHandlingDestination::beginParagraph() {
	this->inParagraph = true;
}

void RTFReader$TextHandlingDestination::endParagraph() {
	$useLocalObjectStack();
	$var($AttributeSet, pgfAttributes, currentParagraphAttributes());
	$var($AttributeSet, chrAttributes, currentTextAttributes());
	finishParagraph(pgfAttributes, chrAttributes);
	this->inParagraph = false;
}

RTFReader$TextHandlingDestination::RTFReader$TextHandlingDestination() {
}

$Class* RTFReader$TextHandlingDestination::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$TextHandlingDestination, this$0)},
		{"inParagraph", "Z", nullptr, 0, $field(RTFReader$TextHandlingDestination, inParagraph)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, $PUBLIC, $method(RTFReader$TextHandlingDestination, init$, void, $RTFReader*)},
		{"beginParagraph", "()V", nullptr, $PROTECTED, $virtualMethod(RTFReader$TextHandlingDestination, beginParagraph, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader$TextHandlingDestination, close, void)},
		{"deliverText", "(Ljava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $ABSTRACT, $virtualMethod(RTFReader$TextHandlingDestination, deliverText, void, $String*, $AttributeSet*)},
		{"endParagraph", "()V", nullptr, $PROTECTED, $virtualMethod(RTFReader$TextHandlingDestination, endParagraph, void)},
		{"endSection", "()V", nullptr, $ABSTRACT, $virtualMethod(RTFReader$TextHandlingDestination, endSection, void)},
		{"finishParagraph", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)V", nullptr, $ABSTRACT, $virtualMethod(RTFReader$TextHandlingDestination, finishParagraph, void, $AttributeSet*, $AttributeSet*)},
		{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(RTFReader$TextHandlingDestination, handleKeyword, bool, $String*)},
		{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RTFReader$TextHandlingDestination, handleText, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFReader$TextHandlingDestination", "javax.swing.text.rtf.RTFReader", "TextHandlingDestination", $ABSTRACT},
		{"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination", "javax.swing.text.rtf.RTFReader", "AttributeTrackingDestination", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.text.rtf.RTFReader$TextHandlingDestination",
		"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination",
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
	$loadClass(RTFReader$TextHandlingDestination, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFReader$TextHandlingDestination);
	});
	return class$;
}

$Class* RTFReader$TextHandlingDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax