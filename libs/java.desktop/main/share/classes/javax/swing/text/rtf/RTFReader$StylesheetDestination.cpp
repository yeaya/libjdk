#include <javax/swing/text/rtf/RTFReader$StylesheetDestination.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/RTFReader$Destination.h>
#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>
#include <javax/swing/text/rtf/RTFReader$StylesheetDestination$StyleDefiningDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $StyleArray = $Array<::javax::swing::text::Style>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $Style = ::javax::swing::text::Style;
using $Constants = ::javax::swing::text::rtf::Constants;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$DiscardingDestination = ::javax::swing::text::rtf::RTFReader$DiscardingDestination;
using $RTFReader$StylesheetDestination$StyleDefiningDestination = ::javax::swing::text::rtf::RTFReader$StylesheetDestination$StyleDefiningDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFReader$StylesheetDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$DiscardingDestination::init$(this$0);
	$set(this, definedStyles, $new($Hashtable));
}

void RTFReader$StylesheetDestination::begingroup() {
	this->this$0->setRTFDestination($$new($RTFReader$StylesheetDestination$StyleDefiningDestination, this));
}

void RTFReader$StylesheetDestination::close() {
	$useLocalObjectStack();
	$var($Vector, chrStyles, $new($Vector));
	$var($Vector, pgfStyles, $new($Vector));
	$var($Vector, secStyles, $new($Vector));
	$var($Enumeration, styles, $nc(this->definedStyles)->elements());
	while ($nc(styles)->hasMoreElements()) {
		$var($RTFReader$StylesheetDestination$StyleDefiningDestination, style, nullptr);
		$var($Style, defined, nullptr);
		$assign(style, $cast($RTFReader$StylesheetDestination$StyleDefiningDestination, styles->nextElement()));
		$assign(defined, $nc(style)->realize());
		this->this$0->warning($$str({"Style "_s, $$str(style->number), " ("_s, style->styleName, "): "_s, defined}));
		$init($Constants);
		$var($String, stype, $cast($String, $nc(defined)->getAttribute($Constants::StyleType)));
		$var($Vector, toSet, nullptr);
		if ($nc(stype)->equals($Constants::STSection)) {
			$assign(toSet, secStyles);
		} else if (stype->equals($Constants::STCharacter)) {
			$assign(toSet, chrStyles);
		} else {
			$assign(toSet, pgfStyles);
		}
		if ($nc(toSet)->size() <= style->number) {
			toSet->setSize(style->number + 1);
		}
		toSet->setElementAt(defined, style->number);
	}
	if (!(chrStyles->isEmpty())) {
		$var($StyleArray, styleArray, $new($StyleArray, chrStyles->size()));
		chrStyles->copyInto(styleArray);
		$set(this->this$0, characterStyles, styleArray);
	}
	if (!(pgfStyles->isEmpty())) {
		$var($StyleArray, styleArray, $new($StyleArray, pgfStyles->size()));
		pgfStyles->copyInto(styleArray);
		$set(this->this$0, paragraphStyles, styleArray);
	}
	if (!(secStyles->isEmpty())) {
		$var($StyleArray, styleArray, $new($StyleArray, secStyles->size()));
		secStyles->copyInto(styleArray);
		$set(this->this$0, sectionStyles, styleArray);
	}
}

RTFReader$StylesheetDestination::RTFReader$StylesheetDestination() {
}

$Class* RTFReader$StylesheetDestination::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$StylesheetDestination, this$0)},
		{"definedStyles", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Integer;Ljavax/swing/text/rtf/RTFReader$StylesheetDestination$StyleDefiningDestination;>;", 0, $field(RTFReader$StylesheetDestination, definedStyles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, $PUBLIC, $method(RTFReader$StylesheetDestination, init$, void, $RTFReader*)},
		{"begingroup", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader$StylesheetDestination, begingroup, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader$StylesheetDestination, close, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFReader$StylesheetDestination", "javax.swing.text.rtf.RTFReader", "StylesheetDestination", 0},
		{"javax.swing.text.rtf.RTFReader$DiscardingDestination", "javax.swing.text.rtf.RTFReader", "DiscardingDestination", 0},
		{"javax.swing.text.rtf.RTFReader$StylesheetDestination$StyleDefiningDestination", "javax.swing.text.rtf.RTFReader$StylesheetDestination", "StyleDefiningDestination", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.rtf.RTFReader$StylesheetDestination",
		"javax.swing.text.rtf.RTFReader$DiscardingDestination",
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
	$loadClass(RTFReader$StylesheetDestination, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFReader$StylesheetDestination);
	});
	return class$;
}

$Class* RTFReader$StylesheetDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax