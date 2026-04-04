#include <javax/swing/text/html/StyleSheet$ViewAttributeSet.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$FontSize.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/MuxingAttributeSet.h>
#include <javax/swing/text/html/StyleSheet$SearchBuffer.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef A
#undef FONT_SIZE
#undef HREF

using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$FontSize = ::javax::swing::text::html::CSS$FontSize;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $MuxingAttributeSet = ::javax::swing::text::html::MuxingAttributeSet;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$SearchBuffer = ::javax::swing::text::html::StyleSheet$SearchBuffer;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void StyleSheet$ViewAttributeSet::init$($StyleSheet* this$0, $View* v) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$MuxingAttributeSet::init$();
	$set(this, host, v);
	$var($Document, doc, $nc(v)->getDocument());
	$var($StyleSheet$SearchBuffer, sb, $StyleSheet$SearchBuffer::obtainSearchBuffer());
	$var($Vector, muxList, $nc(sb)->getVector());
	$var($Throwable, var$0, nullptr);
	try {
		if ($instanceOf($HTMLDocument, doc)) {
			$var($StyleSheet, styles, this$0);
			$var($Element, elem, v->getElement());
			$var($AttributeSet, a, $nc(elem)->getAttributes());
			$var($AttributeSet, htmlAttr, $nc(styles)->translateHTMLToCSS(a));
			if ($nc(htmlAttr)->getAttributeCount() != 0) {
				$nc(muxList)->addElement(htmlAttr);
			}
			if (elem->isLeaf()) {
				$var($Enumeration, keys, $nc(a)->getAttributeNames());
				while ($nc(keys)->hasMoreElements()) {
					$var($Object, key, keys->nextElement());
					if ($instanceOf($HTML$Tag, key)) {
						$init($HTML$Tag);
						if ($equals(key, $HTML$Tag::A)) {
							$var($Object, o, a->getAttribute(key));
							if (o != nullptr && $instanceOf($AttributeSet, o)) {
								$var($AttributeSet, attr, $cast($AttributeSet, o));
								$init($HTML$Attribute);
								if (attr->getAttribute($HTML$Attribute::HREF) == nullptr) {
									continue;
								}
							}
						}
						$var($AttributeSet, cssRule, styles->getRule($cast($HTML$Tag, key), elem));
						if (cssRule != nullptr) {
							$nc(muxList)->addElement(cssRule);
						}
					}
				}
			} else {
				$init($StyleConstants);
				$var($HTML$Tag, t, $cast($HTML$Tag, $nc(a)->getAttribute($StyleConstants::NameAttribute)));
				$var($AttributeSet, cssRule, styles->getRule(t, elem));
				if (cssRule != nullptr) {
					$nc(muxList)->addElement(cssRule);
				}
			}
		}
		$var($AttributeSetArray, attrs, $new($AttributeSetArray, $nc(muxList)->size()));
		muxList->copyInto(attrs);
		setAttributes(attrs);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$StyleSheet$SearchBuffer::releaseSearchBuffer(sb);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool StyleSheet$ViewAttributeSet::isDefined(Object$* key$renamed) {
	$useLocalObjectStack();
	$var($Object, key, key$renamed);
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			$assign(key, cssKey);
		}
	}
	return $MuxingAttributeSet::isDefined(key);
}

$Object* StyleSheet$ViewAttributeSet::getAttribute(Object$* key) {
	$useLocalObjectStack();
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			$var($Object, value, doGetAttribute(cssKey));
			if ($instanceOf($CSS$FontSize, value)) {
				return $of($Integer::valueOf($cast($CSS$FontSize, value)->getValue(this, this->this$0)));
			} else if ($instanceOf($CSS$CssValue, value)) {
				return $cast($CSS$CssValue, value)->toStyleConstants($cast($StyleConstants, key), this->host);
			}
		}
	}
	return doGetAttribute(key);
}

$Object* StyleSheet$ViewAttributeSet::doGetAttribute(Object$* key) {
	$useLocalObjectStack();
	$init($CSS$Attribute);
	if ($equals(key, $CSS$Attribute::FONT_SIZE) && !isDefined(key)) {
		return this->this$0->fontSizeInherit();
	}
	$var($Object, retValue, $MuxingAttributeSet::getAttribute(key));
	if (retValue != nullptr) {
		return retValue;
	}
	if ($instanceOf($CSS$Attribute, key)) {
		$var($CSS$Attribute, css, $cast($CSS$Attribute, key));
		if (css->isInherited()) {
			$var($AttributeSet, parent, getResolveParent());
			if (parent != nullptr) {
				return parent->getAttribute(key);
			}
		}
	}
	return nullptr;
}

$AttributeSet* StyleSheet$ViewAttributeSet::getResolveParent() {
	if (this->host == nullptr) {
		return nullptr;
	}
	$var($View, parent, $nc(this->host)->getParent());
	return (parent != nullptr) ? parent->getAttributes() : ($AttributeSet*)nullptr;
}

StyleSheet$ViewAttributeSet::StyleSheet$ViewAttributeSet() {
}

$Class* StyleSheet$ViewAttributeSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/StyleSheet;", nullptr, $FINAL | $SYNTHETIC, $field(StyleSheet$ViewAttributeSet, this$0)},
		{"host", "Ljavax/swing/text/View;", nullptr, 0, $field(StyleSheet$ViewAttributeSet, host)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljavax/swing/text/View;)V", nullptr, 0, $method(StyleSheet$ViewAttributeSet, init$, void, $StyleSheet*, $View*)},
		{"doGetAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(StyleSheet$ViewAttributeSet, doGetAttribute, $Object*, Object$*)},
		{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StyleSheet$ViewAttributeSet, getAttribute, $Object*, Object$*)},
		{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(StyleSheet$ViewAttributeSet, getResolveParent, $AttributeSet*)},
		{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(StyleSheet$ViewAttributeSet, isDefined, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.StyleSheet$ViewAttributeSet", "javax.swing.text.html.StyleSheet", "ViewAttributeSet", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.StyleSheet$ViewAttributeSet",
		"javax.swing.text.html.MuxingAttributeSet",
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
	$loadClass(StyleSheet$ViewAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyleSheet$ViewAttributeSet));
	});
	return class$;
}

$Class* StyleSheet$ViewAttributeSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax