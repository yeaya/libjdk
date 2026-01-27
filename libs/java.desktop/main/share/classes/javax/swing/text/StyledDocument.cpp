#include <javax/swing/text/StyledDocument.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Style.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $Style = ::javax::swing::text::Style;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyledDocument_MethodInfo_[] = {
	{"addStyle", "(Ljava/lang/String;Ljavax/swing/text/Style;)Ljavax/swing/text/Style;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, addStyle, $Style*, $String*, $Style*)},
	{"getBackground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getBackground, $Color*, $AttributeSet*)},
	{"getCharacterElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getCharacterElement, $Element*, int32_t)},
	{"getFont", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getFont, $Font*, $AttributeSet*)},
	{"getForeground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getForeground, $Color*, $AttributeSet*)},
	{"getLogicalStyle", "(I)Ljavax/swing/text/Style;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getLogicalStyle, $Style*, int32_t)},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getParagraphElement, $Element*, int32_t)},
	{"getStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, getStyle, $Style*, $String*)},
	{"removeStyle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, removeStyle, void, $String*)},
	{"setCharacterAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, setCharacterAttributes, void, int32_t, int32_t, $AttributeSet*, bool)},
	{"setLogicalStyle", "(ILjavax/swing/text/Style;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, setLogicalStyle, void, int32_t, $Style*)},
	{"setParagraphAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StyledDocument, setParagraphAttributes, void, int32_t, int32_t, $AttributeSet*, bool)},
	{}
};

$ClassInfo _StyledDocument_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.StyledDocument",
	nullptr,
	"javax.swing.text.Document",
	nullptr,
	_StyledDocument_MethodInfo_
};

$Object* allocate$StyledDocument($Class* clazz) {
	return $of($alloc(StyledDocument));
}

$Class* StyledDocument::load$($String* name, bool initialize) {
	$loadClass(StyledDocument, name, initialize, &_StyledDocument_ClassInfo_, allocate$StyledDocument);
	return class$;
}

$Class* StyledDocument::class$ = nullptr;

		} // text
	} // swing
} // javax