#include <javax/swing/text/html/StyleSheet$SmallConversionSet.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$SmallAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext$SmallAttributeSet = ::javax::swing::text::StyleContext$SmallAttributeSet;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void StyleSheet$SmallConversionSet::init$($StyleSheet* this$0, $AttributeSet* attrs) {
	$set(this, this$0, this$0);
	$StyleContext$SmallAttributeSet::init$(this$0, attrs);
}

bool StyleSheet$SmallConversionSet::isDefined(Object$* key) {
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			return $StyleContext$SmallAttributeSet::isDefined(cssKey);
		}
	}
	return $StyleContext$SmallAttributeSet::isDefined(key);
}

$Object* StyleSheet$SmallConversionSet::getAttribute(Object$* key) {
	$useLocalObjectStack();
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			$var($Object, value, $StyleContext$SmallAttributeSet::getAttribute(cssKey));
			if (value != nullptr) {
				return $nc(this->this$0->css)->cssValueToStyleConstantsValue($cast($StyleConstants, key), value);
			}
		}
	}
	return $StyleContext$SmallAttributeSet::getAttribute(key);
}

StyleSheet$SmallConversionSet::StyleSheet$SmallConversionSet() {
}

$Class* StyleSheet$SmallConversionSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/StyleSheet;", nullptr, $FINAL | $SYNTHETIC, $field(StyleSheet$SmallConversionSet, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(StyleSheet$SmallConversionSet, init$, void, $StyleSheet*, $AttributeSet*)},
		{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StyleSheet$SmallConversionSet, getAttribute, $Object*, Object$*)},
		{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(StyleSheet$SmallConversionSet, isDefined, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.StyleSheet$SmallConversionSet", "javax.swing.text.html.StyleSheet", "SmallConversionSet", 0},
		{"javax.swing.text.StyleContext$SmallAttributeSet", "javax.swing.text.StyleContext", "SmallAttributeSet", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.StyleSheet$SmallConversionSet",
		"javax.swing.text.StyleContext$SmallAttributeSet",
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
	$loadClass(StyleSheet$SmallConversionSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StyleSheet$SmallConversionSet);
	});
	return class$;
}

$Class* StyleSheet$SmallConversionSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax