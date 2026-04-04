#include <javax/swing/text/html/StyleSheet$SelectorMapping.h>
#include <java/util/HashMap.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Style = ::javax::swing::text::Style;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void StyleSheet$SelectorMapping::init$(int32_t specificity) {
	this->specificity = specificity;
}

int32_t StyleSheet$SelectorMapping::getSpecificity() {
	return this->specificity;
}

void StyleSheet$SelectorMapping::setStyle($Style* style) {
	$set(this, style, style);
}

$Style* StyleSheet$SelectorMapping::getStyle() {
	return this->style;
}

StyleSheet$SelectorMapping* StyleSheet$SelectorMapping::getChildSelectorMapping($String* selector, bool create) {
	$var(StyleSheet$SelectorMapping, retValue, nullptr);
	if (this->children != nullptr) {
		$assign(retValue, $cast(StyleSheet$SelectorMapping, this->children->get(selector)));
	} else if (create) {
		$set(this, children, $new($HashMap, 7));
	}
	if (retValue == nullptr && create) {
		int32_t specificity = getChildSpecificity(selector);
		$assign(retValue, createChildSelectorMapping(specificity));
		$nc(this->children)->put(selector, retValue);
	}
	return retValue;
}

StyleSheet$SelectorMapping* StyleSheet$SelectorMapping::createChildSelectorMapping(int32_t specificity) {
	return $new(StyleSheet$SelectorMapping, specificity);
}

int32_t StyleSheet$SelectorMapping::getChildSpecificity($String* selector) {
	char16_t firstChar = $nc(selector)->charAt(0);
	int32_t specificity = getSpecificity();
	if (firstChar == u'.') {
		specificity += 100;
	} else if (firstChar == u'#') {
		specificity += 10000;
	} else {
		specificity += 1;
		if (selector->indexOf(u'.') != -1) {
			specificity += 100;
		}
		if (selector->indexOf(u'#') != -1) {
			specificity += 10000;
		}
	}
	return specificity;
}

StyleSheet$SelectorMapping::StyleSheet$SelectorMapping() {
}

$Class* StyleSheet$SelectorMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"specificity", "I", nullptr, $PRIVATE, $field(StyleSheet$SelectorMapping, specificity)},
		{"style", "Ljavax/swing/text/Style;", nullptr, $PRIVATE, $field(StyleSheet$SelectorMapping, style)},
		{"children", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/swing/text/html/StyleSheet$SelectorMapping;>;", $PRIVATE, $field(StyleSheet$SelectorMapping, children)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(StyleSheet$SelectorMapping, init$, void, int32_t)},
		{"createChildSelectorMapping", "(I)Ljavax/swing/text/html/StyleSheet$SelectorMapping;", nullptr, $PROTECTED, $virtualMethod(StyleSheet$SelectorMapping, createChildSelectorMapping, StyleSheet$SelectorMapping*, int32_t)},
		{"getChildSelectorMapping", "(Ljava/lang/String;Z)Ljavax/swing/text/html/StyleSheet$SelectorMapping;", nullptr, $PUBLIC, $virtualMethod(StyleSheet$SelectorMapping, getChildSelectorMapping, StyleSheet$SelectorMapping*, $String*, bool)},
		{"getChildSpecificity", "(Ljava/lang/String;)I", nullptr, $PROTECTED, $virtualMethod(StyleSheet$SelectorMapping, getChildSpecificity, int32_t, $String*)},
		{"getSpecificity", "()I", nullptr, $PUBLIC, $virtualMethod(StyleSheet$SelectorMapping, getSpecificity, int32_t)},
		{"getStyle", "()Ljavax/swing/text/Style;", nullptr, $PUBLIC, $virtualMethod(StyleSheet$SelectorMapping, getStyle, $Style*)},
		{"setStyle", "(Ljavax/swing/text/Style;)V", nullptr, $PUBLIC, $virtualMethod(StyleSheet$SelectorMapping, setStyle, void, $Style*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.StyleSheet$SelectorMapping", "javax.swing.text.html.StyleSheet", "SelectorMapping", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.StyleSheet$SelectorMapping",
		"java.lang.Object",
		"java.io.Serializable",
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
	$loadClass(StyleSheet$SelectorMapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StyleSheet$SelectorMapping);
	});
	return class$;
}

$Class* StyleSheet$SelectorMapping::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax