#include <javax/swing/text/html/StyleSheet$LargeConversionSet.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void StyleSheet$LargeConversionSet::init$($StyleSheet* this$0, $AttributeSet* source) {
	$set(this, this$0, this$0);
	$SimpleAttributeSet::init$(source);
}

void StyleSheet$LargeConversionSet::init$($StyleSheet* this$0) {
	$set(this, this$0, this$0);
	$SimpleAttributeSet::init$();
}

bool StyleSheet$LargeConversionSet::isDefined(Object$* key) {
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			return $SimpleAttributeSet::isDefined(cssKey);
		}
	}
	return $SimpleAttributeSet::isDefined(key);
}

$Object* StyleSheet$LargeConversionSet::getAttribute(Object$* key) {
	$useLocalObjectStack();
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			$var($Object, value, $SimpleAttributeSet::getAttribute(cssKey));
			if (value != nullptr) {
				return $nc(this->this$0->css)->cssValueToStyleConstantsValue($cast($StyleConstants, key), value);
			}
		}
	}
	return $SimpleAttributeSet::getAttribute(key);
}

StyleSheet$LargeConversionSet::StyleSheet$LargeConversionSet() {
}

$Class* StyleSheet$LargeConversionSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/StyleSheet;", nullptr, $FINAL | $SYNTHETIC, $field(StyleSheet$LargeConversionSet, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(StyleSheet$LargeConversionSet, init$, void, $StyleSheet*, $AttributeSet*)},
		{"<init>", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC, $method(StyleSheet$LargeConversionSet, init$, void, $StyleSheet*)},
		{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StyleSheet$LargeConversionSet, getAttribute, $Object*, Object$*)},
		{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(StyleSheet$LargeConversionSet, isDefined, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.StyleSheet$LargeConversionSet", "javax.swing.text.html.StyleSheet", "LargeConversionSet", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.StyleSheet$LargeConversionSet",
		"javax.swing.text.SimpleAttributeSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.StyleSheet"
	};
	$loadClass(StyleSheet$LargeConversionSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyleSheet$LargeConversionSet));
	});
	return class$;
}

$Class* StyleSheet$LargeConversionSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax