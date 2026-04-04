#include <java/awt/TextArea.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/TextArea$AccessibleAWTTextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/TextAreaPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef FORWARD_TRAVERSAL_KEYS
#undef SCROLLBARS_BOTH
#undef SCROLLBARS_HORIZONTAL_ONLY
#undef SCROLLBARS_NONE
#undef SCROLLBARS_VERTICAL_ONLY

using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $TextArea$AccessibleAWTTextArea = ::java::awt::TextArea$AccessibleAWTTextArea;
using $TextComponent = ::java::awt::TextComponent;
using $Toolkit = ::java::awt::Toolkit;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace java {
	namespace awt {

$String* TextArea::base = nullptr;
int32_t TextArea::nameCounter = 0;
$Set* TextArea::forwardTraversalKeys = nullptr;
$Set* TextArea::backwardTraversalKeys = nullptr;

void TextArea::initIDs() {
	$init(TextArea);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void TextArea::init$() {
	TextArea::init$(""_s, 0, 0, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$($String* text) {
	TextArea::init$(text, 0, 0, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$(int32_t rows, int32_t columns) {
	TextArea::init$(""_s, rows, columns, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$($String* text, int32_t rows, int32_t columns) {
	TextArea::init$(text, rows, columns, TextArea::SCROLLBARS_BOTH);
}

void TextArea::init$($String* text, int32_t rows, int32_t columns, int32_t scrollbars) {
	$TextComponent::init$(text);
	this->textAreaSerializedDataVersion = 2;
	this->rows = (rows >= 0) ? rows : 0;
	this->columns = (columns >= 0) ? columns : 0;
	if (scrollbars >= TextArea::SCROLLBARS_BOTH && scrollbars <= TextArea::SCROLLBARS_NONE) {
		this->scrollbarVisibility = scrollbars;
	} else {
		this->scrollbarVisibility = TextArea::SCROLLBARS_BOTH;
	}
	setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, TextArea::forwardTraversalKeys);
	setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, TextArea::backwardTraversalKeys);
}

$String* TextArea::constructComponentName() {
	$synchronized(TextArea::class$) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(TextArea::base);
		var$0->append(TextArea::nameCounter++);
		return $str(var$0);
	}
}

void TextArea::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $$nc(getComponentFactory())->createTextArea(this));
		}
		$TextComponent::addNotify();
	}
}

void TextArea::insert($String* str, int32_t pos) {
	insertText(str, pos);
}

void TextArea::insertText($String* str, int32_t pos) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		if (peer != nullptr) {
			peer->insert(str, pos);
		}
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($nc(this->text)->substring(0, pos)));
		var$0->append(str);
		var$0->append($(this->text->substring(pos)));
		$set(this, text, $str(var$0));
	}
}

void TextArea::append($String* str) {
	appendText(str);
}

void TextArea::appendText($String* str) {
	$synchronized(this) {
		insertText(str, $$nc(getText())->length());
	}
}

void TextArea::replaceRange($String* str, int32_t start, int32_t end) {
	replaceText(str, start, end);
}

void TextArea::replaceText($String* str, int32_t start, int32_t end) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		if (peer != nullptr) {
			peer->replaceRange(str, start, end);
		}
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($nc(this->text)->substring(0, start)));
		var$0->append(str);
		var$0->append($(this->text->substring(end)));
		$set(this, text, $str(var$0));
	}
}

int32_t TextArea::getRows() {
	return this->rows;
}

void TextArea::setRows(int32_t rows) {
	int32_t oldVal = this->rows;
	if (rows < 0) {
		$throwNew($IllegalArgumentException, "rows less than zero."_s);
	}
	if (rows != oldVal) {
		this->rows = rows;
		invalidate();
	}
}

int32_t TextArea::getColumns() {
	return this->columns;
}

void TextArea::setColumns(int32_t columns) {
	int32_t oldVal = this->columns;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	if (columns != oldVal) {
		this->columns = columns;
		invalidate();
	}
}

int32_t TextArea::getScrollbarVisibility() {
	return this->scrollbarVisibility;
}

$Dimension* TextArea::getPreferredSize(int32_t rows, int32_t columns) {
	return preferredSize(rows, columns);
}

$Dimension* TextArea::preferredSize(int32_t rows, int32_t columns) {
	$synchronized(getTreeLock()) {
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		return (peer != nullptr) ? peer->getPreferredSize(rows, columns) : $TextComponent::preferredSize();
	}
}

$Dimension* TextArea::getPreferredSize() {
	return preferredSize();
}

$Dimension* TextArea::preferredSize() {
	$synchronized(getTreeLock()) {
		return ((this->rows > 0) && (this->columns > 0)) ? preferredSize(this->rows, this->columns) : $TextComponent::preferredSize();
	}
}

$Dimension* TextArea::getMinimumSize(int32_t rows, int32_t columns) {
	return minimumSize(rows, columns);
}

$Dimension* TextArea::minimumSize(int32_t rows, int32_t columns) {
	$synchronized(getTreeLock()) {
		$var($TextAreaPeer, peer, $cast($TextAreaPeer, this->peer));
		return (peer != nullptr) ? peer->getMinimumSize(rows, columns) : $TextComponent::minimumSize();
	}
}

$Dimension* TextArea::getMinimumSize() {
	return minimumSize();
}

$Dimension* TextArea::minimumSize() {
	$synchronized(getTreeLock()) {
		return ((this->rows > 0) && (this->columns > 0)) ? minimumSize(this->rows, this->columns) : $TextComponent::minimumSize();
	}
}

$String* TextArea::paramString() {
	$useLocalObjectStack();
	$var($String, sbVisStr, nullptr);
	switch (this->scrollbarVisibility) {
	case TextArea::SCROLLBARS_BOTH:
		$assign(sbVisStr, "both"_s);
		break;
	case TextArea::SCROLLBARS_VERTICAL_ONLY:
		$assign(sbVisStr, "vertical-only"_s);
		break;
	case TextArea::SCROLLBARS_HORIZONTAL_ONLY:
		$assign(sbVisStr, "horizontal-only"_s);
		break;
	case TextArea::SCROLLBARS_NONE:
		$assign(sbVisStr, "none"_s);
		break;
	default:
		$assign(sbVisStr, "invalid display policy"_s);
	}
	return $str({$($TextComponent::paramString()), ",rows="_s, $$str(this->rows), ",columns="_s, $$str(this->columns), ",scrollbarVisibility="_s, sbVisStr});
}

void TextArea::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->columns < 0) {
		this->columns = 0;
	}
	if (this->rows < 0) {
		this->rows = 0;
	}
	if ((this->scrollbarVisibility < TextArea::SCROLLBARS_BOTH) || (this->scrollbarVisibility > TextArea::SCROLLBARS_NONE)) {
		this->scrollbarVisibility = TextArea::SCROLLBARS_BOTH;
	}
	if (this->textAreaSerializedDataVersion < 2) {
		setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, TextArea::forwardTraversalKeys);
		setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, TextArea::backwardTraversalKeys);
	}
}

$AccessibleContext* TextArea::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($TextArea$AccessibleAWTTextArea, this));
	}
	return this->accessibleContext;
}

void TextArea::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(TextArea::base, "text"_s);
	TextArea::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			TextArea::initIDs();
		}
		$assignStatic(TextArea::forwardTraversalKeys, $KeyboardFocusManager::initFocusTraversalKeysSet("ctrl TAB"_s, $$new($HashSet)));
		$assignStatic(TextArea::backwardTraversalKeys, $KeyboardFocusManager::initFocusTraversalKeysSet("ctrl shift TAB"_s, $$new($HashSet)));
	}
}

TextArea::TextArea() {
}

$Class* TextArea::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rows", "I", nullptr, 0, $field(TextArea, rows)},
		{"columns", "I", nullptr, 0, $field(TextArea, columns)},
		{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextArea, base)},
		{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(TextArea, nameCounter)},
		{"SCROLLBARS_BOTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_BOTH)},
		{"SCROLLBARS_VERTICAL_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_VERTICAL_ONLY)},
		{"SCROLLBARS_HORIZONTAL_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_HORIZONTAL_ONLY)},
		{"SCROLLBARS_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextArea, SCROLLBARS_NONE)},
		{"scrollbarVisibility", "I", nullptr, $PRIVATE, $field(TextArea, scrollbarVisibility)},
		{"forwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PRIVATE | $STATIC, $staticField(TextArea, forwardTraversalKeys)},
		{"backwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PRIVATE | $STATIC, $staticField(TextArea, backwardTraversalKeys)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextArea, serialVersionUID)},
		{"textAreaSerializedDataVersion", "I", nullptr, $PRIVATE, $field(TextArea, textAreaSerializedDataVersion)},
		{}
	};
	$CompoundAttribute appendTextmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute insertTextmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute minimumSizemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute minimumSizemethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute preferredSizemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute preferredSizemethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute replaceTextmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextArea, init$, void), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TextArea, init$, void, $String*), "java.awt.HeadlessException"},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(TextArea, init$, void, int32_t, int32_t), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(TextArea, init$, void, $String*, int32_t, int32_t), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(TextArea, init$, void, $String*, int32_t, int32_t, int32_t), "java.awt.HeadlessException"},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(TextArea, addNotify, void)},
		{"append", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TextArea, append, void, $String*)},
		{"appendText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(TextArea, appendText, void, $String*), nullptr, nullptr, appendTextmethodAnnotations$$},
		{"constructComponentName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(TextArea, constructComponentName, $String*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(TextArea, getAccessibleContext, $AccessibleContext*)},
		{"getColumns", "()I", nullptr, $PUBLIC, $virtualMethod(TextArea, getColumns, int32_t)},
		{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TextArea, getMinimumSize, $Dimension*, int32_t, int32_t)},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TextArea, getMinimumSize, $Dimension*)},
		{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TextArea, getPreferredSize, $Dimension*, int32_t, int32_t)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TextArea, getPreferredSize, $Dimension*)},
		{"getRows", "()I", nullptr, $PUBLIC, $virtualMethod(TextArea, getRows, int32_t)},
		{"getScrollbarVisibility", "()I", nullptr, $PUBLIC, $virtualMethod(TextArea, getScrollbarVisibility, int32_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(TextArea, initIDs, void)},
		{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(TextArea, insert, void, $String*, int32_t)},
		{"insertText", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(TextArea, insertText, void, $String*, int32_t), nullptr, nullptr, insertTextmethodAnnotations$$},
		{"minimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TextArea, minimumSize, $Dimension*, int32_t, int32_t), nullptr, nullptr, minimumSizemethodAnnotations$$},
		{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TextArea, minimumSize, $Dimension*), nullptr, nullptr, minimumSizemethodAnnotations$$$1},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TextArea, paramString, $String*)},
		{"preferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TextArea, preferredSize, $Dimension*, int32_t, int32_t), nullptr, nullptr, preferredSizemethodAnnotations$$},
		{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TextArea, preferredSize, $Dimension*), nullptr, nullptr, preferredSizemethodAnnotations$$$1},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(TextArea, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
		{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(TextArea, replaceRange, void, $String*, int32_t, int32_t)},
		{"replaceText", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(TextArea, replaceText, void, $String*, int32_t, int32_t), nullptr, nullptr, replaceTextmethodAnnotations$$},
		{"setColumns", "(I)V", nullptr, $PUBLIC, $virtualMethod(TextArea, setColumns, void, int32_t)},
		{"setRows", "(I)V", nullptr, $PUBLIC, $virtualMethod(TextArea, setRows, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.TextArea$AccessibleAWTTextArea", "java.awt.TextArea", "AccessibleAWTTextArea", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.TextArea",
		"java.awt.TextComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.TextArea$AccessibleAWTTextArea"
	};
	$loadClass(TextArea, name, initialize, &classInfo$$, TextArea::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextArea));
	});
	return class$;
}

$Class* TextArea::class$ = nullptr;

	} // awt
} // java