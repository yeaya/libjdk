#include <javax/swing/text/html/HTML.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef B
#undef COMMENT
#undef CONTENT
#undef FONT
#undef HTML
#undef I
#undef IMPLIED
#undef NULL_ATTRIBUTE_VALUE
#undef STRIKE
#undef SUB
#undef SUP
#undef U

using $HTML$AttributeArray = $Array<::javax::swing::text::html::HTML$Attribute>;
using $HTML$TagArray = $Array<::javax::swing::text::html::HTML$Tag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Hashtable = ::java::util::Hashtable;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$Hashtable* HTML::tagHashtable = nullptr;
$Hashtable* HTML::scMapping = nullptr;
$String* HTML::NULL_ATTRIBUTE_VALUE = nullptr;
$Hashtable* HTML::attHashtable = nullptr;

void HTML::init$() {
}

$HTML$TagArray* HTML::getAllTags() {
	$init(HTML);
	$init($HTML$Tag);
	$var($HTML$TagArray, tags, $new($HTML$TagArray, $nc($HTML$Tag::allTags)->length));
	$System::arraycopy($HTML$Tag::allTags, 0, tags, 0, $HTML$Tag::allTags->length);
	return tags;
}

$HTML$Tag* HTML::getTag($String* tagName) {
	$init(HTML);
	$var($HTML$Tag, t, $cast($HTML$Tag, HTML::tagHashtable->get(tagName)));
	return (t == nullptr ? ($HTML$Tag*)nullptr : t);
}

$HTML$Tag* HTML::getTagForStyleConstantsKey($StyleConstants* sc) {
	$init(HTML);
	return $cast($HTML$Tag, HTML::scMapping->get(sc));
}

int32_t HTML::getIntegerAttributeValue($AttributeSet* attr, $HTML$Attribute* key, int32_t def) {
	$init(HTML);
	$useLocalObjectStack();
	int32_t value = def;
	$var($String, istr, $cast($String, $nc(attr)->getAttribute(key)));
	if (istr != nullptr) {
		try {
			value = $($Integer::valueOf(istr))->intValue();
		} catch ($NumberFormatException& e) {
			value = def;
		}
	}
	return value;
}

$HTML$AttributeArray* HTML::getAllAttributeKeys() {
	$init(HTML);
	$init($HTML$Attribute);
	$var($HTML$AttributeArray, attributes, $new($HTML$AttributeArray, $nc($HTML$Attribute::allAttributes)->length));
	$System::arraycopy($HTML$Attribute::allAttributes, 0, attributes, 0, $HTML$Attribute::allAttributes->length);
	return attributes;
}

$HTML$Attribute* HTML::getAttributeKey($String* attName) {
	$init(HTML);
	$var($HTML$Attribute, a, $cast($HTML$Attribute, HTML::attHashtable->get(attName)));
	if (a == nullptr) {
		return nullptr;
	}
	return a;
}

void HTML::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(HTML::NULL_ATTRIBUTE_VALUE, "#DEFAULT"_s);
	$assignStatic(HTML::tagHashtable, $new($Hashtable, 73));
	$assignStatic(HTML::scMapping, $new($Hashtable, 8));
	{
		$init($HTML$Tag);
		for (int32_t i = 0; i < $nc($HTML$Tag::allTags)->length; ++i) {
			HTML::tagHashtable->put($($nc($HTML$Tag::allTags->get(i))->toString()), $HTML$Tag::allTags->get(i));
			$StyleContext::registerStaticAttributeKey($HTML$Tag::allTags->get(i));
		}
		$StyleContext::registerStaticAttributeKey($HTML$Tag::IMPLIED);
		$StyleContext::registerStaticAttributeKey($HTML$Tag::CONTENT);
		$StyleContext::registerStaticAttributeKey($HTML$Tag::COMMENT);
		$init($HTML$Attribute);
		for (int32_t i = 0; i < $nc($HTML$Attribute::allAttributes)->length; ++i) {
			$StyleContext::registerStaticAttributeKey($HTML$Attribute::allAttributes->get(i));
		}
		$StyleContext::registerStaticAttributeKey(HTML::NULL_ATTRIBUTE_VALUE);
		$init($StyleConstants);
		HTML::scMapping->put($StyleConstants::Bold, $HTML$Tag::B);
		HTML::scMapping->put($StyleConstants::Italic, $HTML$Tag::I);
		HTML::scMapping->put($StyleConstants::Underline, $HTML$Tag::U);
		HTML::scMapping->put($StyleConstants::StrikeThrough, $HTML$Tag::STRIKE);
		HTML::scMapping->put($StyleConstants::Superscript, $HTML$Tag::SUP);
		HTML::scMapping->put($StyleConstants::Subscript, $HTML$Tag::SUB);
		HTML::scMapping->put($StyleConstants::FontFamily, $HTML$Tag::FONT);
		HTML::scMapping->put($StyleConstants::FontSize, $HTML$Tag::FONT);
	}
	$assignStatic(HTML::attHashtable, $new($Hashtable, 77));
	{
		for (int32_t i = 0; i < $HTML$Attribute::allAttributes->length; ++i) {
			HTML::attHashtable->put($($nc($HTML$Attribute::allAttributes->get(i))->toString()), $HTML$Attribute::allAttributes->get(i));
		}
	}
}

HTML::HTML() {
}

$Class* HTML::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tagHashtable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTML, tagHashtable)},
		{"scMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljavax/swing/text/html/HTML$Tag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTML, scMapping)},
		{"NULL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTML, NULL_ATTRIBUTE_VALUE)},
		{"attHashtable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/HTML$Attribute;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTML, attHashtable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HTML, init$, void)},
		{"getAllAttributeKeys", "()[Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC, $staticMethod(HTML, getAllAttributeKeys, $HTML$AttributeArray*)},
		{"getAllTags", "()[Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC, $staticMethod(HTML, getAllTags, $HTML$TagArray*)},
		{"getAttributeKey", "(Ljava/lang/String;)Ljavax/swing/text/html/HTML$Attribute;", nullptr, $PUBLIC | $STATIC, $staticMethod(HTML, getAttributeKey, $HTML$Attribute*, $String*)},
		{"getIntegerAttributeValue", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/HTML$Attribute;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(HTML, getIntegerAttributeValue, int32_t, $AttributeSet*, $HTML$Attribute*, int32_t)},
		{"getTag", "(Ljava/lang/String;)Ljavax/swing/text/html/HTML$Tag;", nullptr, $PUBLIC | $STATIC, $staticMethod(HTML, getTag, $HTML$Tag*, $String*)},
		{"getTagForStyleConstantsKey", "(Ljavax/swing/text/StyleConstants;)Ljavax/swing/text/html/HTML$Tag;", nullptr, $STATIC, $staticMethod(HTML, getTagForStyleConstantsKey, $HTML$Tag*, $StyleConstants*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTML$Attribute", "javax.swing.text.html.HTML", "Attribute", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.text.html.HTML$UnknownTag", "javax.swing.text.html.HTML", "UnknownTag", $PUBLIC | $STATIC},
		{"javax.swing.text.html.HTML$Tag", "javax.swing.text.html.HTML", "Tag", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.HTML",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.html.HTML$Attribute,javax.swing.text.html.HTML$UnknownTag,javax.swing.text.html.HTML$Tag"
	};
	$loadClass(HTML, name, initialize, &classInfo$$, HTML::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HTML);
	});
	return class$;
}

$Class* HTML::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax