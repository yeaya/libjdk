#include <javax/swing/JTextArea.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Math.h>
#include <java/util/Set.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea$AccessibleJTextArea.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea$AccessibleJTextArea = ::javax::swing::JTextArea$AccessibleJTextArea;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;

namespace javax {
	namespace swing {

$String* JTextArea::uiClassID = nullptr;

void JTextArea::init$() {
	JTextArea::init$(nullptr, nullptr, 0, 0);
}

void JTextArea::init$($String* text) {
	JTextArea::init$(nullptr, text, 0, 0);
}

void JTextArea::init$(int32_t rows, int32_t columns) {
	JTextArea::init$(nullptr, nullptr, rows, columns);
}

void JTextArea::init$($String* text, int32_t rows, int32_t columns) {
	JTextArea::init$(nullptr, text, rows, columns);
}

void JTextArea::init$($Document* doc) {
	JTextArea::init$(doc, nullptr, 0, 0);
}

void JTextArea::init$($Document* doc$renamed, $String* text, int32_t rows, int32_t columns) {
	$useLocalObjectStack();
	$var($Document, doc, doc$renamed);
	$JTextComponent::init$();
	this->rows = rows;
	this->columns = columns;
	if (doc == nullptr) {
		$assign(doc, createDefaultModel());
	}
	setDocument(doc);
	if (text != nullptr) {
		setText(text);
		select(0, 0);
	}
	if (rows < 0) {
		$throwNew($IllegalArgumentException, $$str({"rows: "_s, $$str(rows)}));
	}
	if (columns < 0) {
		$throwNew($IllegalArgumentException, $$str({"columns: "_s, $$str(columns)}));
	}
	$LookAndFeel::installProperty(this, "focusTraversalKeysForward"_s, $($JComponent::getManagingFocusForwardTraversalKeys()));
	$LookAndFeel::installProperty(this, "focusTraversalKeysBackward"_s, $($JComponent::getManagingFocusBackwardTraversalKeys()));
}

$String* JTextArea::getUIClassID() {
	return JTextArea::uiClassID;
}

$Document* JTextArea::createDefaultModel() {
	return $new($PlainDocument);
}

void JTextArea::setTabSize(int32_t size) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		int32_t old = getTabSize();
		$init($PlainDocument);
		doc->putProperty($PlainDocument::tabSizeAttribute, $($Integer::valueOf(size)));
		firePropertyChange("tabSize"_s, old, size);
	}
}

int32_t JTextArea::getTabSize() {
	$useLocalObjectStack();
	int32_t size = 8;
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		$init($PlainDocument);
		$var($Integer, i, $cast($Integer, doc->getProperty($PlainDocument::tabSizeAttribute)));
		if (i != nullptr) {
			size = i->intValue();
		}
	}
	return size;
}

void JTextArea::setLineWrap(bool wrap) {
	bool old = this->wrap;
	this->wrap = wrap;
	firePropertyChange("lineWrap"_s, old, wrap);
}

bool JTextArea::getLineWrap() {
	return this->wrap;
}

void JTextArea::setWrapStyleWord(bool word) {
	bool old = this->word;
	this->word = word;
	firePropertyChange("wrapStyleWord"_s, old, word);
}

bool JTextArea::getWrapStyleWord() {
	return this->word;
}

int32_t JTextArea::getLineOfOffset(int32_t offset) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (offset < 0) {
		$throwNew($BadLocationException, "Can\'t translate offset to line"_s, -1);
	} else if (offset > $nc(doc)->getLength()) {
		$throwNew($BadLocationException, "Can\'t translate offset to line"_s, doc->getLength() + 1);
	} else {
		$var($Element, map, $$nc(getDocument())->getDefaultRootElement());
		return $nc(map)->getElementIndex(offset);
	}
}

int32_t JTextArea::getLineCount() {
	$useLocalObjectStack();
	$var($Element, map, $$nc(getDocument())->getDefaultRootElement());
	return $nc(map)->getElementCount();
}

int32_t JTextArea::getLineStartOffset(int32_t line) {
	$useLocalObjectStack();
	int32_t lineCount = getLineCount();
	if (line < 0) {
		$throwNew($BadLocationException, "Negative line"_s, -1);
	} else if (line >= lineCount) {
		$throwNew($BadLocationException, "No such line"_s, $$nc(getDocument())->getLength() + 1);
	} else {
		$var($Element, map, $$nc(getDocument())->getDefaultRootElement());
		$var($Element, lineElem, $nc(map)->getElement(line));
		return $nc(lineElem)->getStartOffset();
	}
}

int32_t JTextArea::getLineEndOffset(int32_t line) {
	$useLocalObjectStack();
	int32_t lineCount = getLineCount();
	if (line < 0) {
		$throwNew($BadLocationException, "Negative line"_s, -1);
	} else if (line >= lineCount) {
		$throwNew($BadLocationException, "No such line"_s, $$nc(getDocument())->getLength() + 1);
	} else {
		$var($Element, map, $$nc(getDocument())->getDefaultRootElement());
		$var($Element, lineElem, $nc(map)->getElement(line));
		int32_t endOffset = $nc(lineElem)->getEndOffset();
		return ((line == lineCount - 1) ? (endOffset - 1) : endOffset);
	}
}

void JTextArea::insert($String* str, int32_t pos) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			doc->insertString(pos, str, nullptr);
		} catch ($BadLocationException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
}

void JTextArea::append($String* str) {
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			doc->insertString(doc->getLength(), str, nullptr);
		} catch ($BadLocationException& e) {
		}
	}
}

void JTextArea::replaceRange($String* str, int32_t start, int32_t end) {
	$useLocalObjectStack();
	if (end < start) {
		$throwNew($IllegalArgumentException, "end before start"_s);
	}
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			if ($instanceOf($AbstractDocument, doc)) {
				$cast($AbstractDocument, doc)->replace(start, end - start, str, nullptr);
			} else {
				doc->remove(start, end - start);
				doc->insertString(start, str, nullptr);
			}
		} catch ($BadLocationException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
}

int32_t JTextArea::getRows() {
	return this->rows;
}

void JTextArea::setRows(int32_t rows) {
	int32_t oldVal = this->rows;
	if (rows < 0) {
		$throwNew($IllegalArgumentException, "rows less than zero."_s);
	}
	if (rows != oldVal) {
		this->rows = rows;
		invalidate();
	}
}

int32_t JTextArea::getRowHeight() {
	$useLocalObjectStack();
	if (this->rowHeight == 0) {
		$var($FontMetrics, metrics, getFontMetrics($(getFont())));
		this->rowHeight = $nc(metrics)->getHeight();
	}
	return this->rowHeight;
}

int32_t JTextArea::getColumns() {
	return this->columns;
}

void JTextArea::setColumns(int32_t columns) {
	int32_t oldVal = this->columns;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	if (columns != oldVal) {
		this->columns = columns;
		invalidate();
	}
}

int32_t JTextArea::getColumnWidth() {
	$useLocalObjectStack();
	if (this->columnWidth == 0) {
		$var($FontMetrics, metrics, getFontMetrics($(getFont())));
		this->columnWidth = $nc(metrics)->charWidth(u'm');
	}
	return this->columnWidth;
}

$Dimension* JTextArea::getPreferredSize() {
	$useLocalObjectStack();
	$var($Dimension, d, $JTextComponent::getPreferredSize());
	$assign(d, (d == nullptr) ? $new($Dimension, 400, 400) : d);
	$var($Insets, insets, getInsets());
	if (this->columns != 0) {
		$nc(d)->width = $Math::max($nc(d)->width, this->columns * getColumnWidth() + $nc(insets)->left + $nc(insets)->right);
	}
	if (this->rows != 0) {
		$nc(d)->height = $Math::max($nc(d)->height, this->rows * getRowHeight() + $nc(insets)->top + $nc(insets)->bottom);
	}
	return d;
}

void JTextArea::setFont($Font* f) {
	$JTextComponent::setFont(f);
	this->rowHeight = 0;
	this->columnWidth = 0;
}

$String* JTextArea::paramString() {
	$useLocalObjectStack();
	$var($String, wrapString, this->wrap ? "true"_s : "false"_s);
	$var($String, wordString, this->word ? "true"_s : "false"_s);
	return $str({$($JTextComponent::paramString()), ",colums="_s, $$str(this->columns), ",columWidth="_s, $$str(this->columnWidth), ",rows="_s, $$str(this->rows), ",rowHeight="_s, $$str(this->rowHeight), ",word="_s, wordString, ",wrap="_s, wrapString});
}

bool JTextArea::getScrollableTracksViewportWidth() {
	return (this->wrap) ? true : $JTextComponent::getScrollableTracksViewportWidth();
}

$Dimension* JTextArea::getPreferredScrollableViewportSize() {
	$useLocalObjectStack();
	$var($Dimension, size, $JTextComponent::getPreferredScrollableViewportSize());
	$assign(size, (size == nullptr) ? $new($Dimension, 400, 400) : size);
	$var($Insets, insets, getInsets());
	$nc(size)->width = (this->columns == 0) ? $nc(size)->width : this->columns * getColumnWidth() + $nc(insets)->left + $nc(insets)->right;
	size->height = (this->rows == 0) ? size->height : this->rows * getRowHeight() + $nc(insets)->top + $nc(insets)->bottom;
	return size;
}

int32_t JTextArea::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalObjectStack();
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		return getRowHeight();
	case $SwingConstants::HORIZONTAL:
		return getColumnWidth();
	default:
		$throwNew($IllegalArgumentException, $$str({"Invalid orientation: "_s, $$str(orientation)}));
	}
}

void JTextArea::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JTextArea::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$AccessibleContext* JTextArea::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTextArea$AccessibleJTextArea, this));
	}
	return this->accessibleContext;
}

JTextArea::JTextArea() {
}

void JTextArea::clinit$($Class* clazz) {
	$assignStatic(JTextArea::uiClassID, "TextAreaUI"_s);
}

$Class* JTextArea::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextArea, uiClassID)},
		{"rows", "I", nullptr, $PRIVATE, $field(JTextArea, rows)},
		{"columns", "I", nullptr, $PRIVATE, $field(JTextArea, columns)},
		{"columnWidth", "I", nullptr, $PRIVATE, $field(JTextArea, columnWidth)},
		{"rowHeight", "I", nullptr, $PRIVATE, $field(JTextArea, rowHeight)},
		{"wrap", "Z", nullptr, $PRIVATE, $field(JTextArea, wrap)},
		{"word", "Z", nullptr, $PRIVATE, $field(JTextArea, word)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getLineCountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getLineCountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getLineCountmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getPreferredScrollableViewportSizemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getPreferredScrollableViewportSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getPreferredScrollableViewportSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getScrollableTracksViewportWidthmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getScrollableTracksViewportWidthmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getScrollableTracksViewportWidthmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setColumnsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "the number of columns preferred for display"},
		{}
	};
	$CompoundAttribute setColumnsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColumnsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLineWrapmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "should lines be wrapped"},
		{}
	};
	$CompoundAttribute setLineWrapmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLineWrapmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRowsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "the number of rows preferred for display"},
		{}
	};
	$CompoundAttribute setRowsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRowsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTabSizemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "the number of characters to expand tabs to"},
		{}
	};
	$CompoundAttribute setTabSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTabSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setWrapStyleWordmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "should wrapping occur at word boundaries"},
		{}
	};
	$CompoundAttribute setWrapStyleWordmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setWrapStyleWordmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextArea, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JTextArea, init$, void, $String*)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(JTextArea, init$, void, int32_t, int32_t)},
		{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(JTextArea, init$, void, $String*, int32_t, int32_t)},
		{"<init>", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $method(JTextArea, init$, void, $Document*)},
		{"<init>", "(Ljavax/swing/text/Document;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(JTextArea, init$, void, $Document*, $String*, int32_t, int32_t)},
		{"append", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, append, void, $String*)},
		{"createDefaultModel", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED, $virtualMethod(JTextArea, createDefaultModel, $Document*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JTextArea, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getColumnWidth", "()I", nullptr, $PROTECTED, $virtualMethod(JTextArea, getColumnWidth, int32_t)},
		{"getColumns", "()I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getColumns, int32_t)},
		{"getLineCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getLineCount, int32_t), nullptr, nullptr, getLineCountmethodAnnotations$$},
		{"getLineEndOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getLineEndOffset, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"getLineOfOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getLineOfOffset, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"getLineStartOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getLineStartOffset, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"getLineWrap", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextArea, getLineWrap, bool)},
		{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JTextArea, getPreferredScrollableViewportSize, $Dimension*), nullptr, nullptr, getPreferredScrollableViewportSizemethodAnnotations$$},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JTextArea, getPreferredSize, $Dimension*)},
		{"getRowHeight", "()I", nullptr, $PROTECTED, $virtualMethod(JTextArea, getRowHeight, int32_t)},
		{"getRows", "()I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getRows, int32_t)},
		{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextArea, getScrollableTracksViewportWidth, bool), nullptr, nullptr, getScrollableTracksViewportWidthmethodAnnotations$$},
		{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getScrollableUnitIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
		{"getTabSize", "()I", nullptr, $PUBLIC, $virtualMethod(JTextArea, getTabSize, int32_t)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextArea, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getWrapStyleWord", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextArea, getWrapStyleWord, bool)},
		{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, insert, void, $String*, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JTextArea, paramString, $String*)},
		{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, replaceRange, void, $String*, int32_t, int32_t)},
		{"setColumns", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, setColumns, void, int32_t), nullptr, nullptr, setColumnsmethodAnnotations$$},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, setFont, void, $Font*)},
		{"setLineWrap", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, setLineWrap, void, bool), nullptr, nullptr, setLineWrapmethodAnnotations$$},
		{"setRows", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, setRows, void, int32_t), nullptr, nullptr, setRowsmethodAnnotations$$},
		{"setTabSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, setTabSize, void, int32_t), nullptr, nullptr, setTabSizemethodAnnotations$$},
		{"setWrapStyleWord", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTextArea, setWrapStyleWord, void, bool), nullptr, nullptr, setWrapStyleWordmethodAnnotations$$},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JTextArea, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextArea$AccessibleJTextArea", "javax.swing.JTextArea", "AccessibleJTextArea", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UIClassID"},
		{"description", 's', "A multi-line area that displays plain text."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTextArea",
		"javax.swing.text.JTextComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JTextArea$AccessibleJTextArea"
	};
	$loadClass(JTextArea, name, initialize, &classInfo$$, JTextArea::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextArea));
	});
	return class$;
}

$Class* JTextArea::class$ = nullptr;

	} // swing
} // javax