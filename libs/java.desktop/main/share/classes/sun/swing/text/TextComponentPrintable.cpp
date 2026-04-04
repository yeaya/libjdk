#include <sun/swing/text/TextComponentPrintable.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$Iterator.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <sun/swing/text/CompoundPrintable.h>
#include <sun/swing/text/CountingPrintable.h>
#include <sun/swing/text/TextComponentPrintable$1.h>
#include <sun/swing/text/TextComponentPrintable$10.h>
#include <sun/swing/text/TextComponentPrintable$2.h>
#include <sun/swing/text/TextComponentPrintable$3.h>
#include <sun/swing/text/TextComponentPrintable$4.h>
#include <sun/swing/text/TextComponentPrintable$5.h>
#include <sun/swing/text/TextComponentPrintable$6.h>
#include <sun/swing/text/TextComponentPrintable$7.h>
#include <sun/swing/text/TextComponentPrintable$8.h>
#include <sun/swing/text/TextComponentPrintable$9.h>
#include <sun/swing/text/TextComponentPrintable$IntegerSegment.h>
#include <sun/swing/text/html/FrameEditorPaneTag.h>
#include <jcpp.h>

#undef ABOVE_TOP
#undef BELOW_BOTTOM
#undef BOLD
#undef CENTER
#undef FOOTER_FONT_SIZE
#undef FRAME
#undef HEADER_FONT_SIZE
#undef HONOR_DISPLAY_PROPERTIES
#undef HUGE_INTEGER
#undef LIST_SIZE
#undef MAX_VALUE
#undef MIN_VALUE
#undef NO_SUCH_PAGE
#undef PAGE_EXISTS
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef W3C_LENGTH_UNITS

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $BorderFactory = ::javax::swing::BorderFactory;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextPane = ::javax::swing::JTextPane;
using $JViewport = ::javax::swing::JViewport;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $CompoundPrintable = ::sun::swing::text::CompoundPrintable;
using $CountingPrintable = ::sun::swing::text::CountingPrintable;
using $TextComponentPrintable$1 = ::sun::swing::text::TextComponentPrintable$1;
using $TextComponentPrintable$10 = ::sun::swing::text::TextComponentPrintable$10;
using $TextComponentPrintable$2 = ::sun::swing::text::TextComponentPrintable$2;
using $TextComponentPrintable$3 = ::sun::swing::text::TextComponentPrintable$3;
using $TextComponentPrintable$4 = ::sun::swing::text::TextComponentPrintable$4;
using $TextComponentPrintable$5 = ::sun::swing::text::TextComponentPrintable$5;
using $TextComponentPrintable$6 = ::sun::swing::text::TextComponentPrintable$6;
using $TextComponentPrintable$7 = ::sun::swing::text::TextComponentPrintable$7;
using $TextComponentPrintable$8 = ::sun::swing::text::TextComponentPrintable$8;
using $TextComponentPrintable$9 = ::sun::swing::text::TextComponentPrintable$9;
using $TextComponentPrintable$IntegerSegment = ::sun::swing::text::TextComponentPrintable$IntegerSegment;
using $FrameEditorPaneTag = ::sun::swing::text::html::FrameEditorPaneTag;

namespace sun {
	namespace swing {
		namespace text {

bool TextComponentPrintable::$assertionsDisabled = false;
float TextComponentPrintable::HEADER_FONT_SIZE = 0.0;
float TextComponentPrintable::FOOTER_FONT_SIZE = 0.0;

$Printable* TextComponentPrintable::getPrintable($JTextComponent* textComponent, $MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	$init(TextComponentPrintable);
	$useLocalObjectStack();
	if ($instanceOf($JEditorPane, textComponent) && isFrameSetDocument($(textComponent->getDocument()))) {
		$var($List, frames, getFrames($cast($JEditorPane, textComponent)));
		$var($List, printables, $new($ArrayList));
		{
			$var($Iterator, i$, $nc(frames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JEditorPane, frame, $cast($JEditorPane, i$->next()));
				{
					printables->add($$cast($CountingPrintable, getPrintable(frame, headerFormat, footerFormat)));
				}
			}
		}
		return $new($CompoundPrintable, printables);
	} else {
		return $new(TextComponentPrintable, textComponent, headerFormat, footerFormat);
	}
}

bool TextComponentPrintable::isFrameSetDocument($Document* document) {
	$init(TextComponentPrintable);
	$useLocalObjectStack();
	bool ret = false;
	if ($instanceOf($HTMLDocument, document)) {
		$var($HTMLDocument, htmlDocument, $cast($HTMLDocument, document));
		$init($HTML$Tag);
		if ($$nc(htmlDocument->getIterator($HTML$Tag::FRAME))->isValid()) {
			ret = true;
		}
	}
	return ret;
}

$List* TextComponentPrintable::getFrames($JEditorPane* editor) {
	$init(TextComponentPrintable);
	$var($List, list, $new($ArrayList));
	getFrames(editor, list);
	if (list->size() == 0) {
		createFrames(editor);
		getFrames(editor, list);
	}
	return list;
}

void TextComponentPrintable::getFrames($Container* container, $List* list) {
	$init(TextComponentPrintable);
	$useLocalObjectStack();
	$var($ComponentArray, arr$, $nc(container)->getComponents());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Component, c, arr$->get(i$));
		if ($instanceOf($FrameEditorPaneTag, c) && $instanceOf($JEditorPane, c)) {
			$nc(list)->add($cast($JEditorPane, c));
		} else if ($instanceOf($Container, c)) {
			getFrames($cast($Container, c), list);
		}
	}
}

void TextComponentPrintable::createFrames($JEditorPane* editor) {
	$init(TextComponentPrintable);
	$var($Runnable, doCreateFrames, $new($TextComponentPrintable$1, editor));
	if ($SwingUtilities::isEventDispatchThread()) {
		doCreateFrames->run();
	} else {
		try {
			$SwingUtilities::invokeAndWait(doCreateFrames);
		} catch ($Exception& e) {
			if ($instanceOf($RuntimeException, e)) {
				$throw($cast($RuntimeException, e));
			} else {
				$throwNew($RuntimeException, e);
			}
		}
	}
}

void TextComponentPrintable::init$($JTextComponent* textComponent, $MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	$useLocalObjectStack();
	this->isLayouted = false;
	$set(this, frc, $new($AtomicReference, nullptr));
	this->needReadLock = false;
	$set(this, textComponentToPrint, textComponent);
	$set(this, headerFormat, headerFormat);
	$set(this, footerFormat, footerFormat);
	$set(this, headerFont, $$nc($nc(textComponent)->getFont())->deriveFont($Font::BOLD, TextComponentPrintable::HEADER_FONT_SIZE));
	$set(this, footerFont, $$nc(textComponent->getFont())->deriveFont($Font::PLAIN, TextComponentPrintable::FOOTER_FONT_SIZE));
	$set(this, pagesMetrics, $Collections::synchronizedList($$new($ArrayList)));
	$set(this, rowsMetrics, $new($ArrayList, TextComponentPrintable::LIST_SIZE));
	$set(this, printShell, createPrintShell(textComponent));
}

$JTextComponent* TextComponentPrintable::createPrintShell($JTextComponent* textComponent) {
	$useLocalObjectStack();
	if ($SwingUtilities::isEventDispatchThread()) {
		return createPrintShellOnEDT(textComponent);
	} else {
		$var($FutureTask, futureCreateShell, $new($FutureTask, $$new($TextComponentPrintable$2, this, textComponent)));
		$SwingUtilities::invokeLater(futureCreateShell);
		try {
			return $cast($JTextComponent, futureCreateShell->get());
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, e);
		} catch ($ExecutionException& e) {
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			}
			if ($instanceOf($RuntimeException, cause)) {
				$throw($cast($RuntimeException, cause));
			}
			$throwNew($AssertionError, cause);
		}
	}
	$shouldNotReachHere();
}

$JTextComponent* TextComponentPrintable::createPrintShellOnEDT($JTextComponent* textComponent) {
	$useLocalObjectStack();
	if (!TextComponentPrintable::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	$var($JTextComponent, ret, nullptr);
	if ($instanceOf($JPasswordField, textComponent)) {
		$assign(ret, $new($TextComponentPrintable$3, this, textComponent));
	} else if ($instanceOf($JTextField, textComponent)) {
		$assign(ret, $new($TextComponentPrintable$4, this, textComponent));
	} else if ($instanceOf($JTextArea, textComponent)) {
		$assign(ret, $new($TextComponentPrintable$5, this, textComponent));
	} else if ($instanceOf($JTextPane, textComponent)) {
		$assign(ret, $new($TextComponentPrintable$6, this, textComponent));
	} else if ($instanceOf($JEditorPane, textComponent)) {
		$assign(ret, $new($TextComponentPrintable$7, this, textComponent));
	}
	$nc(ret)->setBorder(nullptr);
	ret->setOpaque($nc(textComponent)->isOpaque());
	ret->setEditable(textComponent->isEditable());
	ret->setEnabled(textComponent->isEnabled());
	ret->setFont($(textComponent->getFont()));
	ret->setBackground($(textComponent->getBackground()));
	ret->setForeground($(textComponent->getForeground()));
	ret->setComponentOrientation($(textComponent->getComponentOrientation()));
	if ($instanceOf($JEditorPane, ret)) {
		$init($JEditorPane);
		ret->putClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES, $(textComponent->getClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES)));
		ret->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $(textComponent->getClientProperty($JEditorPane::W3C_LENGTH_UNITS)));
		ret->putClientProperty("charset"_s, $(textComponent->getClientProperty("charset"_s)));
	}
	ret->setDocument($(textComponent->getDocument()));
	return ret;
}

int32_t TextComponentPrintable::getNumberOfPages() {
	return $nc(this->pagesMetrics)->size();
}

int32_t TextComponentPrintable::print($Graphics* graphics, $PageFormat* pf, int32_t pageIndex) {
	$useLocalObjectStack();
	if (!this->isLayouted) {
		if ($instanceOf($Graphics2D, graphics)) {
			this->frc->set($($cast($Graphics2D, graphics)->getFontRenderContext()));
		}
		layout($cast(int32_t, $Math::floor($nc(pf)->getImageableWidth())));
		calculateRowsMetrics();
	}
	int32_t ret = 0;
	if (!$SwingUtilities::isEventDispatchThread()) {
		$var($Callable, doPrintOnEDT, $new($TextComponentPrintable$8, this, graphics, pf, pageIndex));
		$var($FutureTask, futurePrintOnEDT, $new($FutureTask, doPrintOnEDT));
		$SwingUtilities::invokeLater(futurePrintOnEDT);
		try {
			ret = $$sure($Integer, futurePrintOnEDT->get())->intValue();
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, e);
		} catch ($ExecutionException& e) {
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($PrinterException, cause)) {
				$throw($cast($PrinterException, cause));
			} else if ($instanceOf($RuntimeException, cause)) {
				$throw($cast($RuntimeException, cause));
			} else if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			} else {
				$throwNew($RuntimeException, cause);
			}
		}
	} else {
		ret = printOnEDT(graphics, pf, pageIndex);
	}
	return ret;
}

int32_t TextComponentPrintable::printOnEDT($Graphics* graphics, $PageFormat* pf, int32_t pageIndex) {
	$useLocalObjectStack();
	if (!TextComponentPrintable::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	$var($Border, border, $BorderFactory::createEmptyBorder());
	if (this->headerFormat != nullptr || this->footerFormat != nullptr) {
		$var($ObjectArray, formatArg, $new($ObjectArray, {$($Integer::valueOf(pageIndex + 1))}));
		if (this->headerFormat != nullptr) {
			$var($String, var$0, this->headerFormat->format(formatArg));
			$var($Font, var$1, this->headerFont);
			$assign(border, $new($TitledBorder, border, var$0, $TitledBorder::CENTER, $TitledBorder::ABOVE_TOP, var$1, $($nc(this->printShell)->getForeground())));
		}
		if (this->footerFormat != nullptr) {
			$var($String, var$2, this->footerFormat->format(formatArg));
			$var($Font, var$3, this->footerFont);
			$assign(border, $new($TitledBorder, border, var$2, $TitledBorder::CENTER, $TitledBorder::BELOW_BOTTOM, var$3, $($nc(this->printShell)->getForeground())));
		}
	}
	$var($Insets, borderInsets, $nc(border)->getBorderInsets(this->printShell));
	updatePagesMetrics(pageIndex, $cast(int32_t, $Math::floor($nc(pf)->getImageableHeight())) - $nc(borderInsets)->top - $nc(borderInsets)->bottom);
	if ($nc(this->pagesMetrics)->size() <= pageIndex) {
		return $Printable::NO_SUCH_PAGE;
	}
	$var($Graphics2D, g2d, $cast($Graphics2D, $nc(graphics)->create()));
	double var$4 = pf->getImageableX();
	$nc(g2d)->translate(var$4, pf->getImageableY());
	$var($Component, var$5, this->printShell);
	int32_t var$6 = $cast(int32_t, $Math::floor(pf->getImageableWidth()));
	border->paintBorder(var$5, g2d, 0, 0, var$6, $cast(int32_t, $Math::floor(pf->getImageableHeight())));
	$nc(g2d)->translate(0, borderInsets->top);
	int32_t var$7 = $cast(int32_t, pf->getWidth());
	int32_t var$8 = $nc(($$cast($TextComponentPrintable$IntegerSegment, this->pagesMetrics->get(pageIndex))))->end;
	$var($Rectangle, clip, $new($Rectangle, 0, 0, var$7, var$8 - $nc(($$cast($TextComponentPrintable$IntegerSegment, this->pagesMetrics->get(pageIndex))))->start + 1));
	g2d->clip(clip);
	int32_t xStart = 0;
	$init($ComponentOrientation);
	if ($ComponentOrientation::RIGHT_TO_LEFT == $nc(this->printShell)->getComponentOrientation()) {
		int32_t var$9 = $cast(int32_t, pf->getImageableWidth());
		xStart = var$9 - this->printShell->getWidth();
	}
	g2d->translate(xStart, -$nc(($$cast($TextComponentPrintable$IntegerSegment, this->pagesMetrics->get(pageIndex))))->start);
	this->printShell->print(g2d);
	g2d->dispose();
	return $Printable::PAGE_EXISTS;
}

void TextComponentPrintable::releaseReadLock() {
	if (!TextComponentPrintable::$assertionsDisabled && ! !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	$var($Document, document, $nc(this->textComponentToPrint)->getDocument());
	if ($instanceOf($AbstractDocument, document)) {
		try {
			$cast($AbstractDocument, document)->readUnlock();
			this->needReadLock = true;
		} catch ($Error& ignore) {
		}
	}
}

void TextComponentPrintable::acquireReadLock() {
	$useLocalObjectStack();
	if (!TextComponentPrintable::$assertionsDisabled && ! !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	if (this->needReadLock) {
		try {
			$SwingUtilities::invokeAndWait($$new($TextComponentPrintable$9, this));
		} catch ($InterruptedException& ignore) {
		} catch ($InvocationTargetException& ignore) {
		}
		$var($Document, document, $nc(this->textComponentToPrint)->getDocument());
		$nc($cast($AbstractDocument, document))->readLock();
		this->needReadLock = false;
	}
}

void TextComponentPrintable::layout(int32_t width) {
	$useLocalObjectStack();
	if (!$SwingUtilities::isEventDispatchThread()) {
		$var($Callable, doLayoutOnEDT, $new($TextComponentPrintable$10, this, width));
		$var($FutureTask, futureLayoutOnEDT, $new($FutureTask, doLayoutOnEDT));
		releaseReadLock();
		$SwingUtilities::invokeLater(futureLayoutOnEDT);
		$var($Throwable, var$0, nullptr);
		try {
			try {
				futureLayoutOnEDT->get();
			} catch ($InterruptedException& e) {
				$throwNew($RuntimeException, e);
			} catch ($ExecutionException& e) {
				$var($Throwable, cause, e->getCause());
				if ($instanceOf($RuntimeException, cause)) {
					$throw($cast($RuntimeException, cause));
				} else if ($instanceOf($Error, cause)) {
					$throw($cast($Error, cause));
				} else {
					$throwNew($RuntimeException, cause);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			acquireReadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} else {
		layoutOnEDT(width);
	}
	this->isLayouted = true;
}

void TextComponentPrintable::layoutOnEDT(int32_t width) {
	$useLocalObjectStack();
	if (!TextComponentPrintable::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	int32_t HUGE_INTEGER = $Integer::MAX_VALUE - 1000;
	$var($CellRendererPane, rendererPane, $new($CellRendererPane));
	$var($JViewport, viewport, $new($JViewport));
	viewport->setBorder(nullptr);
	$var($Dimension, size, $new($Dimension, width, HUGE_INTEGER));
	if ($instanceOf($JTextField, this->printShell)) {
		$assign(size, $new($Dimension, size->width, $nc($(this->printShell->getPreferredSize()))->height));
	}
	$nc(this->printShell)->setSize(size);
	viewport->setComponentOrientation($(this->printShell->getComponentOrientation()));
	viewport->setSize(size);
	viewport->add(this->printShell);
	rendererPane->add(viewport);
}

void TextComponentPrintable::updatePagesMetrics(int32_t pageIndex, int32_t pageHeight) {
	$useLocalObjectStack();
	while (true) {
		bool var$0 = pageIndex >= $nc(this->pagesMetrics)->size();
		if (!(var$0 && !$nc(this->rowsMetrics)->isEmpty())) {
			break;
		}
		{
			int32_t lastPage = this->pagesMetrics->size() - 1;
			int32_t pageStart = (lastPage >= 0) ? $nc(($$cast($TextComponentPrintable$IntegerSegment, this->pagesMetrics->get(lastPage))))->end + 1 : 0;
			int32_t rowIndex = 0;
			for (rowIndex = 0;; ++rowIndex) {
				bool var$1 = rowIndex < $nc(this->rowsMetrics)->size();
				if (!(var$1 && ($nc(($$cast($TextComponentPrintable$IntegerSegment, this->rowsMetrics->get(rowIndex))))->end - pageStart + 1) <= pageHeight)) {
					break;
				}
				{
				}
			}
			if (rowIndex == 0) {
				this->pagesMetrics->add($$new($TextComponentPrintable$IntegerSegment, pageStart, pageStart + pageHeight - 1));
			} else {
				--rowIndex;
				this->pagesMetrics->add($$new($TextComponentPrintable$IntegerSegment, pageStart, $nc(($$cast($TextComponentPrintable$IntegerSegment, this->rowsMetrics->get(rowIndex))))->end));
				for (int32_t i = 0; i <= rowIndex; ++i) {
					this->rowsMetrics->remove(0);
				}
			}
		}
	}
}

void TextComponentPrintable::calculateRowsMetrics() {
	$useLocalObjectStack();
	int32_t documentLength = $$nc($nc(this->printShell)->getDocument())->getLength();
	$var($List, documentMetrics, $new($ArrayList, TextComponentPrintable::LIST_SIZE));
	$var($Rectangle, rect, nullptr);
	for (int32_t i = 0, previousY = -1, previousHeight = -1; i < documentLength; ++i) {
		try {
			$assign(rect, this->printShell->modelToView(i));
			if (rect != nullptr) {
				int32_t y = $cast(int32_t, rect->getY());
				int32_t height = $cast(int32_t, rect->getHeight());
				if (height != 0 && (y != previousY || height != previousHeight)) {
					previousY = y;
					previousHeight = height;
					documentMetrics->add($$new($TextComponentPrintable$IntegerSegment, y, y + height - 1));
				}
			}
		} catch ($BadLocationException& e) {
			if (!TextComponentPrintable::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
	$Collections::sort(documentMetrics);
	int32_t yStart = $Integer::MIN_VALUE;
	int32_t yEnd = $Integer::MIN_VALUE;
	{
		$var($Iterator, i$, documentMetrics->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TextComponentPrintable$IntegerSegment, segment, $cast($TextComponentPrintable$IntegerSegment, i$->next()));
			if (yEnd < $nc(segment)->start) {
				if (yEnd != $Integer::MIN_VALUE) {
					$nc(this->rowsMetrics)->add($$new($TextComponentPrintable$IntegerSegment, yStart, yEnd));
				}
				yStart = segment->start;
				yEnd = segment->end;
			} else {
				yEnd = segment->end;
			}
		}
	}
	if (yEnd != $Integer::MIN_VALUE) {
		$nc(this->rowsMetrics)->add($$new($TextComponentPrintable$IntegerSegment, yStart, yEnd));
	}
}

void TextComponentPrintable::clinit$($Class* clazz) {
	TextComponentPrintable::HEADER_FONT_SIZE = 18.0f;
	TextComponentPrintable::FOOTER_FONT_SIZE = 12.0f;
	TextComponentPrintable::$assertionsDisabled = !TextComponentPrintable::class$->desiredAssertionStatus();
}

TextComponentPrintable::TextComponentPrintable() {
}

$Class* TextComponentPrintable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TextComponentPrintable, $assertionsDisabled)},
		{"LIST_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextComponentPrintable, LIST_SIZE)},
		{"isLayouted", "Z", nullptr, $PRIVATE, $field(TextComponentPrintable, isLayouted)},
		{"textComponentToPrint", "Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE | $FINAL, $field(TextComponentPrintable, textComponentToPrint)},
		{"frc", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/awt/font/FontRenderContext;>;", $PRIVATE | $FINAL, $field(TextComponentPrintable, frc)},
		{"printShell", "Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE | $FINAL, $field(TextComponentPrintable, printShell)},
		{"headerFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $FINAL, $field(TextComponentPrintable, headerFormat)},
		{"footerFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $FINAL, $field(TextComponentPrintable, footerFormat)},
		{"HEADER_FONT_SIZE", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextComponentPrintable, HEADER_FONT_SIZE)},
		{"FOOTER_FONT_SIZE", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextComponentPrintable, FOOTER_FONT_SIZE)},
		{"headerFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(TextComponentPrintable, headerFont)},
		{"footerFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(TextComponentPrintable, footerFont)},
		{"rowsMetrics", "Ljava/util/List;", "Ljava/util/List<Lsun/swing/text/TextComponentPrintable$IntegerSegment;>;", $PRIVATE | $FINAL, $field(TextComponentPrintable, rowsMetrics)},
		{"pagesMetrics", "Ljava/util/List;", "Ljava/util/List<Lsun/swing/text/TextComponentPrintable$IntegerSegment;>;", $PRIVATE | $FINAL, $field(TextComponentPrintable, pagesMetrics)},
		{"needReadLock", "Z", nullptr, $PRIVATE, $field(TextComponentPrintable, needReadLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;Ljava/text/MessageFormat;Ljava/text/MessageFormat;)V", nullptr, $PRIVATE, $method(TextComponentPrintable, init$, void, $JTextComponent*, $MessageFormat*, $MessageFormat*)},
		{"acquireReadLock", "()V", nullptr, $PRIVATE, $method(TextComponentPrintable, acquireReadLock, void)},
		{"calculateRowsMetrics", "()V", nullptr, $PRIVATE, $method(TextComponentPrintable, calculateRowsMetrics, void)},
		{"createFrames", "(Ljavax/swing/JEditorPane;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TextComponentPrintable, createFrames, void, $JEditorPane*)},
		{"createPrintShell", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE, $method(TextComponentPrintable, createPrintShell, $JTextComponent*, $JTextComponent*)},
		{"createPrintShellOnEDT", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE, $method(TextComponentPrintable, createPrintShellOnEDT, $JTextComponent*, $JTextComponent*)},
		{"getFrames", "(Ljavax/swing/JEditorPane;)Ljava/util/List;", "(Ljavax/swing/JEditorPane;)Ljava/util/List<Ljavax/swing/JEditorPane;>;", $PRIVATE | $STATIC, $staticMethod(TextComponentPrintable, getFrames, $List*, $JEditorPane*)},
		{"getFrames", "(Ljava/awt/Container;Ljava/util/List;)V", "(Ljava/awt/Container;Ljava/util/List<Ljavax/swing/JEditorPane;>;)V", $PRIVATE | $STATIC, $staticMethod(TextComponentPrintable, getFrames, void, $Container*, $List*)},
		{"getNumberOfPages", "()I", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable, getNumberOfPages, int32_t)},
		{"getPrintable", "(Ljavax/swing/text/JTextComponent;Ljava/text/MessageFormat;Ljava/text/MessageFormat;)Ljava/awt/print/Printable;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextComponentPrintable, getPrintable, $Printable*, $JTextComponent*, $MessageFormat*, $MessageFormat*)},
		{"isFrameSetDocument", "(Ljavax/swing/text/Document;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(TextComponentPrintable, isFrameSetDocument, bool, $Document*)},
		{"layout", "(I)V", nullptr, $PRIVATE, $method(TextComponentPrintable, layout, void, int32_t)},
		{"layoutOnEDT", "(I)V", nullptr, $PRIVATE, $method(TextComponentPrintable, layoutOnEDT, void, int32_t)},
		{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, $virtualMethod(TextComponentPrintable, print, int32_t, $Graphics*, $PageFormat*, int32_t), "java.awt.print.PrinterException"},
		{"printOnEDT", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PRIVATE, $method(TextComponentPrintable, printOnEDT, int32_t, $Graphics*, $PageFormat*, int32_t), "java.awt.print.PrinterException"},
		{"releaseReadLock", "()V", nullptr, $PRIVATE, $method(TextComponentPrintable, releaseReadLock, void)},
		{"updatePagesMetrics", "(II)V", nullptr, $PRIVATE, $method(TextComponentPrintable, updatePagesMetrics, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.text.TextComponentPrintable$IntegerSegment", "sun.swing.text.TextComponentPrintable", "IntegerSegment", $PRIVATE | $STATIC},
		{"sun.swing.text.TextComponentPrintable$10", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$9", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$8", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$7", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$6", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$5", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$4", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$3", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$2", nullptr, nullptr, 0},
		{"sun.swing.text.TextComponentPrintable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.text.TextComponentPrintable",
		"java.lang.Object",
		"sun.swing.text.CountingPrintable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.swing.text.TextComponentPrintable$IntegerSegment,sun.swing.text.TextComponentPrintable$10,sun.swing.text.TextComponentPrintable$9,sun.swing.text.TextComponentPrintable$8,sun.swing.text.TextComponentPrintable$7,sun.swing.text.TextComponentPrintable$6,sun.swing.text.TextComponentPrintable$5,sun.swing.text.TextComponentPrintable$4,sun.swing.text.TextComponentPrintable$3,sun.swing.text.TextComponentPrintable$2,sun.swing.text.TextComponentPrintable$1"
	};
	$loadClass(TextComponentPrintable, name, initialize, &classInfo$$, TextComponentPrintable::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TextComponentPrintable);
	});
	return class$;
}

$Class* TextComponentPrintable::class$ = nullptr;

		} // text
	} // swing
} // sun