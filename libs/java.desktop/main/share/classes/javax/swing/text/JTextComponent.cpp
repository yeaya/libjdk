#include <javax/swing/text/JTextComponent.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterAbortException.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/CharacterIterator.h>
#include <java/text/MessageFormat.h>
#include <java/util/EventListener.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/FutureTask.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultEditorKit$DefaultKeyTypedAction.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent$1.h>
#include <javax/swing/text/JTextComponent$2.h>
#include <javax/swing/text/JTextComponent$3.h>
#include <javax/swing/text/JTextComponent$4.h>
#include <javax/swing/text/JTextComponent$5.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent$ComposedTextCaret.h>
#include <javax/swing/text/JTextComponent$DefaultKeymap.h>
#include <javax/swing/text/JTextComponent$DefaultTransferHandler.h>
#include <javax/swing/text/JTextComponent$DropLocation.h>
#include <javax/swing/text/JTextComponent$InputMethodRequestsHandler.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <javax/swing/text/JTextComponent$KeymapActionMap.h>
#include <javax/swing/text/JTextComponent$KeymapWrapper.h>
#include <javax/swing/text/JTextComponent$MutableCaretEvent.h>
#include <javax/swing/text/Keymap.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/PrintingStatus.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/text/TextComponentPrintable.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef CARET_POSITION_CHANGED
#undef DEFAULT_KEYMAP
#undef DONE
#undef FOCUSED_COMPONENT
#undef FOCUS_ACCELERATOR_KEY
#undef HORIZONTAL
#undef INPUT_METHOD_EVENT_MASK
#undef INPUT_METHOD_TEXT_CHANGED
#undef KEYMAP_TABLE
#undef KEY_EVENT_MASK
#undef KEY_TYPED
#undef METHOD_OVERRIDDEN
#undef NAME
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR
#undef RUN_DIRECTION_RTL
#undef STRONG
#undef USE_SELECTION
#undef VERTICAL
#undef VK_UNDEFINED
#undef WEAK
#undef WHEN_FOCUSED

using $ActionArray = $Array<::javax::swing::Action>;
using $CaretListenerArray = $Array<::javax::swing::event::CaretListener>;
using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $Printable = ::java::awt::print::Printable;
using $PrinterAbortException = ::java::awt::print::PrinterAbortException;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $CharacterIterator = ::java::text::CharacterIterator;
using $MessageFormat = ::java::text::MessageFormat;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $PrintService = ::javax::print::PrintService;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $DropMode = ::javax::swing::DropMode;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JViewport = ::javax::swing::JViewport;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $UIManager = ::javax::swing::UIManager;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $CaretListener = ::javax::swing::event::CaretListener;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultEditorKit$DefaultKeyTypedAction = ::javax::swing::text::DefaultEditorKit$DefaultKeyTypedAction;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent$1 = ::javax::swing::text::JTextComponent$1;
using $JTextComponent$2 = ::javax::swing::text::JTextComponent$2;
using $JTextComponent$3 = ::javax::swing::text::JTextComponent$3;
using $JTextComponent$4 = ::javax::swing::text::JTextComponent$4;
using $JTextComponent$5 = ::javax::swing::text::JTextComponent$5;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $JTextComponent$ComposedTextCaret = ::javax::swing::text::JTextComponent$ComposedTextCaret;
using $JTextComponent$DefaultKeymap = ::javax::swing::text::JTextComponent$DefaultKeymap;
using $JTextComponent$DefaultTransferHandler = ::javax::swing::text::JTextComponent$DefaultTransferHandler;
using $JTextComponent$DropLocation = ::javax::swing::text::JTextComponent$DropLocation;
using $JTextComponent$InputMethodRequestsHandler = ::javax::swing::text::JTextComponent$InputMethodRequestsHandler;
using $JTextComponent$KeyBinding = ::javax::swing::text::JTextComponent$KeyBinding;
using $JTextComponent$KeymapActionMap = ::javax::swing::text::JTextComponent$KeymapActionMap;
using $JTextComponent$KeymapWrapper = ::javax::swing::text::JTextComponent$KeymapWrapper;
using $JTextComponent$MutableCaretEvent = ::javax::swing::text::JTextComponent$MutableCaretEvent;
using $Keymap = ::javax::swing::text::Keymap;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $Position = ::javax::swing::text::Position;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $AppContext = ::sun::awt::AppContext;
using $PrintingStatus = ::sun::swing::PrintingStatus;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $TextComponentPrintable = ::sun::swing::text::TextComponentPrintable;

namespace javax {
	namespace swing {
		namespace text {

$String* JTextComponent::toString() {
	 return this->$JComponent::toString();
}

int32_t JTextComponent::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JTextComponent::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JTextComponent::clone() {
	 return this->$JComponent::clone();
}

void JTextComponent::finalize() {
	this->$JComponent::finalize();
}

$String* JTextComponent::FOCUS_ACCELERATOR_KEY = nullptr;
$JTextComponent$DefaultTransferHandler* JTextComponent::defaultTransferHandler = nullptr;
$Cache* JTextComponent::METHOD_OVERRIDDEN = nullptr;
$Object* JTextComponent::KEYMAP_TABLE = nullptr;
$Object* JTextComponent::FOCUSED_COMPONENT = nullptr;
$String* JTextComponent::DEFAULT_KEYMAP = nullptr;

void JTextComponent::init$() {
	$JComponent::init$();
	$init($DropMode);
	$set(this, dropMode, $DropMode::USE_SELECTION);
	enableEvents($AWTEvent::KEY_EVENT_MASK | $AWTEvent::INPUT_METHOD_EVENT_MASK);
	$set(this, caretEvent, $new($JTextComponent$MutableCaretEvent, this));
	addMouseListener(this->caretEvent);
	addFocusListener(this->caretEvent);
	setEditable(true);
	setDragEnabled(false);
	setLayout(nullptr);
	updateUI();
}

$ComponentUI* JTextComponent::getUI() {
	return $cast($TextUI, this->ui);
}

void JTextComponent::setUI($TextUI* ui) {
	$JComponent::setUI(ui);
}

void JTextComponent::updateUI() {
	setUI($$cast($TextUI, $UIManager::getUI(this)));
	invalidate();
}

void JTextComponent::addCaretListener($CaretListener* listener) {
	$load($CaretListener);
	$nc(this->listenerList)->add($CaretListener::class$, listener);
}

void JTextComponent::removeCaretListener($CaretListener* listener) {
	$load($CaretListener);
	$nc(this->listenerList)->remove($CaretListener::class$, listener);
}

$CaretListenerArray* JTextComponent::getCaretListeners() {
	$load($CaretListener);
	return $cast($CaretListenerArray, $nc(this->listenerList)->getListeners($CaretListener::class$));
}

void JTextComponent::fireCaretUpdate($CaretEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($CaretListener);
		if ($equals(listeners->get(i), $CaretListener::class$)) {
			$nc($cast($CaretListener, listeners->get(i + 1)))->caretUpdate(e);
		}
	}
}

void JTextComponent::setDocument($Document* doc) {
	$useLocalObjectStack();
	$var($Document, old, this->model);
	$var($Throwable, var$0, nullptr);
	try {
		if ($instanceOf($AbstractDocument, old)) {
			$cast($AbstractDocument, old)->readLock();
		}
		if (this->accessibleContext != nullptr) {
			$nc(this->model)->removeDocumentListener($cast($JTextComponent$AccessibleJTextComponent, this->accessibleContext));
		}
		if (this->inputMethodRequestsHandler != nullptr) {
			$nc(this->model)->removeDocumentListener($cast($DocumentListener, this->inputMethodRequestsHandler));
		}
		$set(this, model, doc);
		$init($TextAttribute);
		$var($Boolean, runDir, $$nc(getComponentOrientation())->isLeftToRight() ? $TextAttribute::RUN_DIRECTION_LTR : $TextAttribute::RUN_DIRECTION_RTL);
		if (!$equals(runDir, $nc(doc)->getProperty($TextAttribute::RUN_DIRECTION))) {
			doc->putProperty($TextAttribute::RUN_DIRECTION, runDir);
		}
		firePropertyChange("document"_s, old, doc);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($instanceOf($AbstractDocument, old)) {
			$cast($AbstractDocument, old)->readUnlock();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	revalidate();
	repaint();
	if (this->accessibleContext != nullptr) {
		$nc(this->model)->addDocumentListener($cast($JTextComponent$AccessibleJTextComponent, this->accessibleContext));
	}
	if (this->inputMethodRequestsHandler != nullptr) {
		$nc(this->model)->addDocumentListener($cast($DocumentListener, this->inputMethodRequestsHandler));
	}
}

$Document* JTextComponent::getDocument() {
	return this->model;
}

void JTextComponent::setComponentOrientation($ComponentOrientation* o) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		$init($TextAttribute);
		$var($Boolean, runDir, $nc(o)->isLeftToRight() ? $TextAttribute::RUN_DIRECTION_LTR : $TextAttribute::RUN_DIRECTION_RTL);
		doc->putProperty($TextAttribute::RUN_DIRECTION, runDir);
	}
	$JComponent::setComponentOrientation(o);
}

$ActionArray* JTextComponent::getActions() {
	$useLocalObjectStack();
	return $$nc($$sure($TextUI, getUI())->getEditorKit(this))->getActions();
}

void JTextComponent::setMargin($Insets* m) {
	$var($Insets, old, this->margin);
	$set(this, margin, m);
	firePropertyChange("margin"_s, old, m);
	invalidate();
}

$Insets* JTextComponent::getMargin() {
	return this->margin;
}

void JTextComponent::setNavigationFilter($NavigationFilter* filter) {
	$set(this, navigationFilter, filter);
}

$NavigationFilter* JTextComponent::getNavigationFilter() {
	return this->navigationFilter;
}

$Caret* JTextComponent::getCaret() {
	return this->caret;
}

void JTextComponent::setCaret($Caret* c) {
	if (this->caret != nullptr) {
		this->caret->removeChangeListener(this->caretEvent);
		$nc(this->caret)->deinstall(this);
	}
	$var($Caret, old, this->caret);
	$set(this, caret, c);
	if (this->caret != nullptr) {
		this->caret->install(this);
		$nc(this->caret)->addChangeListener(this->caretEvent);
	}
	firePropertyChange("caret"_s, old, this->caret);
}

$Highlighter* JTextComponent::getHighlighter() {
	return this->highlighter;
}

void JTextComponent::setHighlighter($Highlighter* h) {
	if (this->highlighter != nullptr) {
		this->highlighter->deinstall(this);
	}
	$var($Highlighter, old, this->highlighter);
	$set(this, highlighter, h);
	if (this->highlighter != nullptr) {
		this->highlighter->install(this);
	}
	firePropertyChange("highlighter"_s, old, h);
}

void JTextComponent::setKeymap($Keymap* map) {
	$var($Keymap, old, this->keymap);
	$set(this, keymap, map);
	firePropertyChange("keymap"_s, old, this->keymap);
	updateInputMap(old, map);
}

void JTextComponent::setDragEnabled(bool b) {
	checkDragEnabled(b);
	this->dragEnabled = b;
}

void JTextComponent::checkDragEnabled(bool b) {
	$init(JTextComponent);
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

bool JTextComponent::getDragEnabled() {
	return this->dragEnabled;
}

void JTextComponent::setDropMode($DropMode* dropMode) {
	checkDropMode(dropMode);
	$set(this, dropMode, dropMode);
}

void JTextComponent::checkDropMode($DropMode* dropMode) {
	$init(JTextComponent);
	if (dropMode != nullptr) {
		$init($JTextComponent$5);
		switch ($nc($JTextComponent$5::$SwitchMap$javax$swing$DropMode)->get((dropMode)->ordinal())) {
		case 1:
		case 2:
			return;
		}
	}
	$throwNew($IllegalArgumentException, $$str({dropMode, ": Unsupported drop mode for text"_s}));
}

$DropMode* JTextComponent::getDropMode() {
	return this->dropMode;
}

$TransferHandler$DropLocation* JTextComponent::dropLocationForPoint($Point* p) {
	$useLocalObjectStack();
	$var($Position$BiasArray, bias, $new($Position$BiasArray, 1));
	int32_t index = $$sure($TextUI, getUI())->viewToModel(this, p, bias);
	if (bias->get(0) == nullptr) {
		bias->set(0, $Position$Bias::Forward);
	}
	return $new($JTextComponent$DropLocation, p, index, bias->get(0));
}

$Object* JTextComponent::setDropLocation($TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	$useLocalObjectStack();
	$var($Object, retVal, nullptr);
	$var($JTextComponent$DropLocation, textLocation, $cast($JTextComponent$DropLocation, location));
	$init($DropMode);
	if (this->dropMode == $DropMode::USE_SELECTION) {
		if (textLocation == nullptr) {
			if (state != nullptr) {
				$var($ObjectArray, vals, $cast($ObjectArray, state));
				if (!forDrop) {
					if ($instanceOf($DefaultCaret, this->caret)) {
						$cast($DefaultCaret, this->caret)->setDot($nc($cast($Integer, vals->get(0)))->intValue(), $cast($Position$Bias, vals->get(3)));
						$nc($cast($DefaultCaret, this->caret))->moveDot($nc($cast($Integer, vals->get(1)))->intValue(), $cast($Position$Bias, vals->get(4)));
					} else {
						$nc(this->caret)->setDot($nc($cast($Integer, vals->get(0)))->intValue());
						$nc(this->caret)->moveDot($nc($cast($Integer, vals->get(1)))->intValue());
					}
				}
				$nc(this->caret)->setVisible($nc($cast($Boolean, vals->get(2)))->booleanValue());
			}
		} else {
			if (this->dropLocation == nullptr) {
				bool visible = false;
				if ($instanceOf($DefaultCaret, this->caret)) {
					$var($DefaultCaret, dc, $cast($DefaultCaret, this->caret));
					visible = $nc(dc)->isActive();
					$assign(retVal, $new($ObjectArray, {
						$($Integer::valueOf(dc->getMark())),
						$($Integer::valueOf(dc->getDot())),
						$($Boolean::valueOf(visible)),
						$(dc->getMarkBias()),
						$(dc->getDotBias())
					}));
				} else {
					visible = $nc(this->caret)->isVisible();
					$assign(retVal, $new($ObjectArray, {
						$($Integer::valueOf($nc(this->caret)->getMark())),
						$($Integer::valueOf($nc(this->caret)->getDot())),
						$($Boolean::valueOf(visible))
					}));
				}
				$nc(this->caret)->setVisible(true);
			} else {
				$assign(retVal, state);
			}
			if ($instanceOf($DefaultCaret, this->caret)) {
				int32_t var$0 = textLocation->getIndex();
				$cast($DefaultCaret, this->caret)->setDot(var$0, $(textLocation->getBias()));
			} else {
				$nc(this->caret)->setDot(textLocation->getIndex());
			}
		}
	} else if (textLocation == nullptr) {
		if (state != nullptr) {
			$nc(this->caret)->setVisible($cast($Boolean, state)->booleanValue());
		}
	} else if (this->dropLocation == nullptr) {
		bool visible = $instanceOf($DefaultCaret, this->caret) ? $cast($DefaultCaret, this->caret)->isActive() : $nc(this->caret)->isVisible();
		$assign(retVal, $Boolean::valueOf(visible));
		$nc(this->caret)->setVisible(false);
	} else {
		$assign(retVal, state);
	}
	$var($JTextComponent$DropLocation, old, this->dropLocation);
	$set(this, dropLocation, textLocation);
	firePropertyChange("dropLocation"_s, old, this->dropLocation);
	return retVal;
}

$JTextComponent$DropLocation* JTextComponent::getDropLocation() {
	return this->dropLocation;
}

void JTextComponent::updateInputMap($Keymap* oldKm, $Keymap* newKm) {
	$useLocalObjectStack();
	$var($InputMap, km, getInputMap($JComponent::WHEN_FOCUSED));
	$var($InputMap, last, km);
	while (km != nullptr && !($instanceOf($JTextComponent$KeymapWrapper, km))) {
		$assign(last, km);
		$assign(km, km->getParent());
	}
	if (km != nullptr) {
		if (newKm == nullptr) {
			if (last != km) {
				$nc(last)->setParent($(km->getParent()));
			} else {
				$nc(last)->setParent(nullptr);
			}
		} else {
			$var($InputMap, newKM, $new($JTextComponent$KeymapWrapper, newKm));
			$nc(last)->setParent(newKM);
			if (last != km) {
				newKM->setParent($(km->getParent()));
			}
		}
	} else if (newKm != nullptr) {
		$assign(km, getInputMap($JComponent::WHEN_FOCUSED));
		if (km != nullptr) {
			$var($InputMap, newKM, $new($JTextComponent$KeymapWrapper, newKm));
			newKM->setParent($(km->getParent()));
			km->setParent(newKM);
		}
	}
	$var($ActionMap, am, getActionMap());
	$var($ActionMap, lastAM, am);
	while (am != nullptr && !($instanceOf($JTextComponent$KeymapActionMap, am))) {
		$assign(lastAM, am);
		$assign(am, am->getParent());
	}
	if (am != nullptr) {
		if (newKm == nullptr) {
			if (lastAM != am) {
				$nc(lastAM)->setParent($(am->getParent()));
			} else {
				$nc(lastAM)->setParent(nullptr);
			}
		} else {
			$var($ActionMap, newAM, $new($JTextComponent$KeymapActionMap, newKm));
			$nc(lastAM)->setParent(newAM);
			if (lastAM != am) {
				newAM->setParent($(am->getParent()));
			}
		}
	} else if (newKm != nullptr) {
		$assign(am, getActionMap());
		if (am != nullptr) {
			$var($ActionMap, newAM, $new($JTextComponent$KeymapActionMap, newKm));
			newAM->setParent($(am->getParent()));
			am->setParent(newAM);
		}
	}
}

$Keymap* JTextComponent::getKeymap() {
	return this->keymap;
}

$Keymap* JTextComponent::addKeymap($String* nm, $Keymap* parent) {
	$init(JTextComponent);
	$useLocalObjectStack();
	$var($Keymap, map, $new($JTextComponent$DefaultKeymap, nm, parent));
	if (nm != nullptr) {
		$$nc(getKeymapTable())->put(nm, map);
	}
	return map;
}

$Keymap* JTextComponent::removeKeymap($String* nm) {
	$init(JTextComponent);
	return $cast($Keymap, $$nc(getKeymapTable())->remove(nm));
}

$Keymap* JTextComponent::getKeymap($String* nm) {
	$init(JTextComponent);
	return $cast($Keymap, $$nc(getKeymapTable())->get(nm));
}

$HashMap* JTextComponent::getKeymapTable() {
	$init(JTextComponent);
	$useLocalObjectStack();
	$synchronized(JTextComponent::KEYMAP_TABLE) {
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var($HashMap, keymapTable, $cast($HashMap, $nc(appContext)->get(JTextComponent::KEYMAP_TABLE)));
		if (keymapTable == nullptr) {
			$assign(keymapTable, $new($HashMap, 17));
			appContext->put(JTextComponent::KEYMAP_TABLE, keymapTable);
			$var($Keymap, binding, addKeymap(JTextComponent::DEFAULT_KEYMAP, nullptr));
			$nc(binding)->setDefaultAction($$new($DefaultEditorKit$DefaultKeyTypedAction));
		}
		return keymapTable;
	}
}

void JTextComponent::loadKeymap($Keymap* map, $JTextComponent$KeyBindingArray* bindings, $ActionArray* actions) {
	$init(JTextComponent);
	$useLocalObjectStack();
	$var($Hashtable, h, $new($Hashtable));
	{
		$var($ActionArray, arr$, actions);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Action, a, arr$->get(i$));
			{
				$var($String, value, $cast($String, $nc(a)->getValue($Action::NAME)));
				h->put((value != nullptr ? value : ""_s), a);
			}
		}
	}
	{
		$var($JTextComponent$KeyBindingArray, arr$, bindings);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($JTextComponent$KeyBinding, binding, arr$->get(i$));
			{
				$var($Action, a, $cast($Action, h->get($nc(binding)->actionName)));
				if (a != nullptr) {
					$nc(map)->addActionForKeyStroke(binding->key, a);
				}
			}
		}
	}
}

$Color* JTextComponent::getCaretColor() {
	return this->caretColor;
}

void JTextComponent::setCaretColor($Color* c) {
	$var($Color, old, this->caretColor);
	$set(this, caretColor, c);
	firePropertyChange("caretColor"_s, old, this->caretColor);
}

$Color* JTextComponent::getSelectionColor() {
	return this->selectionColor;
}

void JTextComponent::setSelectionColor($Color* c) {
	$var($Color, old, this->selectionColor);
	$set(this, selectionColor, c);
	firePropertyChange("selectionColor"_s, old, this->selectionColor);
}

$Color* JTextComponent::getSelectedTextColor() {
	return this->selectedTextColor;
}

void JTextComponent::setSelectedTextColor($Color* c) {
	$var($Color, old, this->selectedTextColor);
	$set(this, selectedTextColor, c);
	firePropertyChange("selectedTextColor"_s, old, this->selectedTextColor);
}

$Color* JTextComponent::getDisabledTextColor() {
	return this->disabledTextColor;
}

void JTextComponent::setDisabledTextColor($Color* c) {
	$var($Color, old, this->disabledTextColor);
	$set(this, disabledTextColor, c);
	firePropertyChange("disabledTextColor"_s, old, this->disabledTextColor);
}

void JTextComponent::replaceSelection($String* content) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			bool composedTextSaved = saveComposedText($nc(this->caret)->getDot());
			int32_t var$0 = $nc(this->caret)->getDot();
			int32_t p0 = $Math::min(var$0, this->caret->getMark());
			int32_t var$1 = $nc(this->caret)->getDot();
			int32_t p1 = $Math::max(var$1, this->caret->getMark());
			if ($instanceOf($AbstractDocument, doc)) {
				$cast($AbstractDocument, doc)->replace(p0, p1 - p0, content, nullptr);
			} else {
				if (p0 != p1) {
					doc->remove(p0, p1 - p0);
				}
				if (content != nullptr && content->length() > 0) {
					doc->insertString(p0, content, nullptr);
				}
			}
			if (composedTextSaved) {
				restoreComposedText();
			}
		} catch ($BadLocationException& e) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
		}
	}
}

$String* JTextComponent::getText(int32_t offs, int32_t len) {
	return $$nc(getDocument())->getText(offs, len);
}

$Rectangle* JTextComponent::modelToView(int32_t pos) {
	return $$sure($TextUI, getUI())->modelToView(this, pos);
}

$Rectangle2D* JTextComponent::modelToView2D(int32_t pos) {
	$init($Position$Bias);
	return $$sure($TextUI, getUI())->modelToView2D(this, pos, $Position$Bias::Forward);
}

int32_t JTextComponent::viewToModel($Point* pt) {
	return $$sure($TextUI, getUI())->viewToModel(this, pt);
}

int32_t JTextComponent::viewToModel2D($Point2D* pt) {
	$useLocalObjectStack();
	return $$sure($TextUI, getUI())->viewToModel2D(this, pt, $$new($Position$BiasArray, 1));
}

void JTextComponent::cut() {
	bool var$0 = isEditable();
	if (var$0 && isEnabled()) {
		invokeAction("cut"_s, $($TransferHandler::getCutAction()));
	}
}

void JTextComponent::copy() {
	invokeAction("copy"_s, $($TransferHandler::getCopyAction()));
}

void JTextComponent::paste() {
	bool var$0 = isEditable();
	if (var$0 && isEnabled()) {
		invokeAction("paste"_s, $($TransferHandler::getPasteAction()));
	}
}

void JTextComponent::invokeAction($String* name, $Action* altAction) {
	$useLocalObjectStack();
	$var($ActionMap, map, getActionMap());
	$var($Action, action, nullptr);
	if (map != nullptr) {
		$assign(action, map->get(name));
	}
	if (action == nullptr) {
		installDefaultTransferHandlerIfNecessary();
		$assign(action, altAction);
	}
	$init($Action);
	$var($String, var$0, $cast($String, $nc(action)->getValue($Action::NAME)));
	int64_t var$1 = $EventQueue::getMostRecentEventTime();
	$nc(action)->actionPerformed($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$0, var$1, getCurrentEventModifiers()));
}

void JTextComponent::installDefaultTransferHandlerIfNecessary() {
	if (getTransferHandler() == nullptr) {
		if (JTextComponent::defaultTransferHandler == nullptr) {
			$assignStatic(JTextComponent::defaultTransferHandler, $new($JTextComponent$DefaultTransferHandler));
		}
		setTransferHandler(JTextComponent::defaultTransferHandler);
	}
}

void JTextComponent::moveCaretPosition(int32_t pos) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		if (pos > doc->getLength() || pos < 0) {
			$throwNew($IllegalArgumentException, $$str({"bad position: "_s, $$str(pos)}));
		}
		$nc(this->caret)->moveDot(pos);
	}
}

void JTextComponent::setFocusAccelerator(char16_t aKey) {
	aKey = $Character::toUpperCase(aKey);
	char16_t old = this->focusAccelerator;
	this->focusAccelerator = aKey;
	firePropertyChange(JTextComponent::FOCUS_ACCELERATOR_KEY, old, this->focusAccelerator);
	firePropertyChange("focusAccelerator"_s, old, this->focusAccelerator);
}

char16_t JTextComponent::getFocusAccelerator() {
	return this->focusAccelerator;
}

void JTextComponent::read($Reader* in, Object$* desc) {
	$useLocalObjectStack();
	$var($EditorKit, kit, $$sure($TextUI, getUI())->getEditorKit(this));
	$var($Document, doc, $nc(kit)->createDefaultDocument());
	if (desc != nullptr) {
		$init($Document);
		$nc(doc)->putProperty($Document::StreamDescriptionProperty, desc);
	}
	try {
		kit->read(in, doc, 0);
		setDocument(doc);
	} catch ($BadLocationException& e) {
		$throwNew($IOException, $(e->getMessage()));
	}
}

void JTextComponent::write($Writer* out) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	try {
		$$nc($$sure($TextUI, getUI())->getEditorKit(this))->write(out, doc, 0, $nc(doc)->getLength());
	} catch ($BadLocationException& e) {
		$throwNew($IOException, $(e->getMessage()));
	}
}

void JTextComponent::removeNotify() {
	$JComponent::removeNotify();
	if (getFocusedComponent() == this) {
		$$nc($AppContext::getAppContext())->remove(JTextComponent::FOCUSED_COMPONENT);
	}
}

void JTextComponent::setCaretPosition(int32_t position) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		if (position > doc->getLength() || position < 0) {
			$throwNew($IllegalArgumentException, $$str({"bad position: "_s, $$str(position)}));
		}
		$nc(this->caret)->setDot(position);
	}
}

int32_t JTextComponent::getCaretPosition() {
	return $nc(this->caret)->getDot();
}

void JTextComponent::setText($String* t) {
	$useLocalObjectStack();
	try {
		$var($Document, doc, getDocument());
		if ($instanceOf($AbstractDocument, doc)) {
			$cast($AbstractDocument, doc)->replace(0, doc->getLength(), t, nullptr);
		} else {
			$nc(doc)->remove(0, $nc(doc)->getLength());
			doc->insertString(0, t, nullptr);
		}
	} catch ($BadLocationException& e) {
		$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this);
	}
}

$String* JTextComponent::getText() {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	$var($String, txt, nullptr);
	try {
		$assign(txt, $nc(doc)->getText(0, $nc(doc)->getLength()));
	} catch ($BadLocationException& e) {
		$assign(txt, nullptr);
	}
	return txt;
}

$String* JTextComponent::getSelectedText() {
	$useLocalObjectStack();
	$var($String, txt, nullptr);
	int32_t var$0 = $nc(this->caret)->getDot();
	int32_t p0 = $Math::min(var$0, this->caret->getMark());
	int32_t var$1 = $nc(this->caret)->getDot();
	int32_t p1 = $Math::max(var$1, this->caret->getMark());
	if (p0 != p1) {
		try {
			$var($Document, doc, getDocument());
			$assign(txt, $nc(doc)->getText(p0, p1 - p0));
		} catch ($BadLocationException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
	return txt;
}

bool JTextComponent::isEditable() {
	return this->editable;
}

void JTextComponent::setEditable(bool b) {
	$useLocalObjectStack();
	if (b != this->editable) {
		bool oldVal = this->editable;
		this->editable = b;
		enableInputMethods(this->editable);
		$var($String, var$0, "editable"_s);
		$var($Object, var$1, $Boolean::valueOf(oldVal));
		firePropertyChange(var$0, var$1, $($Boolean::valueOf(this->editable)));
		repaint();
	}
}

int32_t JTextComponent::getSelectionStart() {
	int32_t var$0 = $nc(this->caret)->getDot();
	int32_t start = $Math::min(var$0, this->caret->getMark());
	return start;
}

void JTextComponent::setSelectionStart(int32_t selectionStart) {
	select(selectionStart, getSelectionEnd());
}

int32_t JTextComponent::getSelectionEnd() {
	int32_t var$0 = $nc(this->caret)->getDot();
	int32_t end = $Math::max(var$0, this->caret->getMark());
	return end;
}

void JTextComponent::setSelectionEnd(int32_t selectionEnd) {
	select(getSelectionStart(), selectionEnd);
}

void JTextComponent::select(int32_t selectionStart, int32_t selectionEnd) {
	int32_t docLength = $$nc(getDocument())->getLength();
	if (selectionStart < 0) {
		selectionStart = 0;
	}
	if (selectionStart > docLength) {
		selectionStart = docLength;
	}
	if (selectionEnd > docLength) {
		selectionEnd = docLength;
	}
	if (selectionEnd < selectionStart) {
		selectionEnd = selectionStart;
	}
	setCaretPosition(selectionStart);
	moveCaretPosition(selectionEnd);
}

void JTextComponent::selectAll() {
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		setCaretPosition(0);
		moveCaretPosition(doc->getLength());
	}
}

$String* JTextComponent::getToolTipText($MouseEvent* event) {
	$useLocalObjectStack();
	$var($String, retValue, $JComponent::getToolTipText(event));
	if (retValue == nullptr) {
		$var($TextUI, ui, $cast($TextUI, getUI()));
		if (ui != nullptr) {
			int32_t var$0 = $nc(event)->getX();
			$assign(retValue, ui->getToolTipText(this, $$new($Point, var$0, event->getY())));
		}
	}
	return retValue;
}

$Dimension* JTextComponent::getPreferredScrollableViewportSize() {
	return getPreferredSize();
}

int32_t JTextComponent::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalObjectStack();
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		return $nc(visibleRect)->height / 10;
	case $SwingConstants::HORIZONTAL:
		return $nc(visibleRect)->width / 10;
	default:
		$throwNew($IllegalArgumentException, $$str({"Invalid orientation: "_s, $$str(orientation)}));
	}
}

int32_t JTextComponent::getScrollableBlockIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalObjectStack();
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		return $nc(visibleRect)->height;
	case $SwingConstants::HORIZONTAL:
		return $nc(visibleRect)->width;
	default:
		$throwNew($IllegalArgumentException, $$str({"Invalid orientation: "_s, $$str(orientation)}));
	}
}

bool JTextComponent::getScrollableTracksViewportWidth() {
	$useLocalObjectStack();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		int32_t var$0 = parent->getWidth();
		return var$0 > $nc($(getPreferredSize()))->width;
	}
	return false;
}

bool JTextComponent::getScrollableTracksViewportHeight() {
	$useLocalObjectStack();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		int32_t var$0 = parent->getHeight();
		return var$0 > $nc($(getPreferredSize()))->height;
	}
	return false;
}

bool JTextComponent::print() {
	return print(nullptr, nullptr, true, nullptr, nullptr, true);
}

bool JTextComponent::print($MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	return print(headerFormat, footerFormat, true, nullptr, nullptr, true);
}

bool JTextComponent::print($MessageFormat* headerFormat, $MessageFormat* footerFormat, bool showPrintDialog, $PrintService* service, $PrintRequestAttributeSet* attributes, bool interactive) {
	$useLocalObjectStack();
	$var($PrinterJob, job, $PrinterJob::getPrinterJob());
	$var($Printable, printable, nullptr);
	$var($PrintingStatus, printingStatus, nullptr);
	bool isHeadless = $GraphicsEnvironment::isHeadless();
	bool isEventDispatchThread = $SwingUtilities::isEventDispatchThread();
	$var($Printable, textPrintable, getPrintable(headerFormat, footerFormat));
	if (interactive && !isHeadless) {
		$assign(printingStatus, $PrintingStatus::createPrintingStatus(this, job));
		$assign(printable, $nc(printingStatus)->createNotificationPrintable(textPrintable));
	} else {
		$assign(printingStatus, nullptr);
		$assign(printable, textPrintable);
	}
	if (service != nullptr) {
		$nc(job)->setPrintService(service);
	}
	$nc(job)->setPrintable(printable);
	$var($PrintRequestAttributeSet, attr, (attributes == nullptr) ? $cast($PrintRequestAttributeSet, $new($HashPrintRequestAttributeSet)) : attributes);
	if (showPrintDialog && !isHeadless && !job->printDialog(attr)) {
		return false;
	}
	$var($Callable, doPrint, $new($JTextComponent$2, this, job, attr, printingStatus));
	$var($FutureTask, futurePrinting, $new($FutureTask, doPrint));
	$var($Runnable, runnablePrinting, $new($JTextComponent$3, this, isEventDispatchThread, futurePrinting));
	if (!interactive || isHeadless) {
		runnablePrinting->run();
	} else if (isEventDispatchThread) {
		$$new($Thread, nullptr, runnablePrinting, "JTextComponentPrint"_s, 0, false)->start();
		$nc(printingStatus)->showModal(true);
	} else {
		$nc(printingStatus)->showModal(false);
		runnablePrinting->run();
	}
	try {
		futurePrinting->get();
	} catch ($InterruptedException& e) {
		$throwNew($RuntimeException, e);
	} catch ($ExecutionException& e) {
		$var($Throwable, cause, e->getCause());
		if ($instanceOf($PrinterAbortException, cause)) {
			if (printingStatus != nullptr && printingStatus->isAborted()) {
				return false;
			} else {
				$throw($cast($PrinterAbortException, cause));
			}
		} else if ($instanceOf($PrinterException, cause)) {
			$throw($cast($PrinterException, cause));
		} else if ($instanceOf($RuntimeException, cause)) {
			$throw($cast($RuntimeException, cause));
		} else if ($instanceOf($Error, cause)) {
			$throw($cast($Error, cause));
		} else {
			$throwNew($AssertionError, cause);
		}
	}
	return true;
}

$Printable* JTextComponent::getPrintable($MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	return $TextComponentPrintable::getPrintable(this, headerFormat, footerFormat);
}

$AccessibleContext* JTextComponent::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTextComponent$AccessibleJTextComponent, this));
	}
	return this->accessibleContext;
}

void JTextComponent::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, model, $cast($Document, $nc(f)->get("model"_s, nullptr)));
	$set(this, navigationFilter, $cast($NavigationFilter, f->get("navigationFilter"_s, nullptr)));
	$set(this, caretColor, $cast($Color, f->get("caretColor"_s, nullptr)));
	$set(this, selectionColor, $cast($Color, f->get("selectionColor"_s, nullptr)));
	$set(this, selectedTextColor, $cast($Color, f->get("selectedTextColor"_s, nullptr)));
	$set(this, disabledTextColor, $cast($Color, f->get("disabledTextColor"_s, nullptr)));
	this->editable = f->get("editable"_s, false);
	$set(this, margin, $cast($Insets, f->get("margin"_s, nullptr)));
	this->focusAccelerator = f->get("focusAccelerator"_s, u'\0');
	bool newDragEnabled = f->get("dragEnabled"_s, false);
	checkDragEnabled(newDragEnabled);
	this->dragEnabled = newDragEnabled;
	$init($DropMode);
	$DropMode* newDropMode = $cast($DropMode, f->get("dropMode"_s, $DropMode::USE_SELECTION));
	checkDropMode(newDropMode);
	$set(this, dropMode, newDropMode);
	$set(this, composedTextAttribute, $cast($SimpleAttributeSet, f->get("composedTextAttribute"_s, nullptr)));
	$set(this, composedTextContent, $cast($String, f->get("composedTextContent"_s, nullptr)));
	$set(this, composedTextStart, $cast($Position, f->get("composedTextStart"_s, nullptr)));
	$set(this, composedTextEnd, $cast($Position, f->get("composedTextEnd"_s, nullptr)));
	$set(this, latestCommittedTextStart, $cast($Position, f->get("latestCommittedTextStart"_s, nullptr)));
	$set(this, latestCommittedTextEnd, $cast($Position, f->get("latestCommittedTextEnd"_s, nullptr)));
	$set(this, composedTextCaret, $cast($JTextComponent$ComposedTextCaret, f->get("composedTextCaret"_s, nullptr)));
	this->checkedInputOverride = f->get("checkedInputOverride"_s, false);
	this->needToSendKeyTypedEvent = f->get("needToSendKeyTypedEvent"_s, false);
	$set(this, caretEvent, $new($JTextComponent$MutableCaretEvent, this));
	addMouseListener(this->caretEvent);
	addFocusListener(this->caretEvent);
}

$String* JTextComponent::paramString() {
	$useLocalObjectStack();
	$var($String, editableString, this->editable ? "true"_s : "false"_s);
	$var($String, caretColorString, this->caretColor != nullptr ? this->caretColor->toString() : ""_s);
	$var($String, selectionColorString, this->selectionColor != nullptr ? this->selectionColor->toString() : ""_s);
	$var($String, selectedTextColorString, this->selectedTextColor != nullptr ? this->selectedTextColor->toString() : ""_s);
	$var($String, disabledTextColorString, this->disabledTextColor != nullptr ? this->disabledTextColor->toString() : ""_s);
	$var($String, marginString, this->margin != nullptr ? this->margin->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",caretColor="_s, caretColorString, ",disabledTextColor="_s, disabledTextColorString, ",editable="_s, editableString, ",margin="_s, marginString, ",selectedTextColor="_s, selectedTextColorString, ",selectionColor="_s, selectionColorString});
}

JTextComponent* JTextComponent::getFocusedComponent() {
	$init(JTextComponent);
	return $cast(JTextComponent, $$nc($AppContext::getAppContext())->get(JTextComponent::FOCUSED_COMPONENT));
}

int32_t JTextComponent::getCurrentEventModifiers() {
	int32_t modifiers = 0;
	$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
	if ($instanceOf($InputEvent, currentEvent)) {
		modifiers = $cast($InputEvent, currentEvent)->getModifiers();
	} else if ($instanceOf($ActionEvent, currentEvent)) {
		modifiers = $cast($ActionEvent, currentEvent)->getModifiers();
	}
	return modifiers;
}

void JTextComponent::processInputMethodEvent($InputMethodEvent* e) {
	$JComponent::processInputMethodEvent(e);
	if (!$nc(e)->isConsumed()) {
		if (!isEditable()) {
			return;
		} else {
			switch (e->getID()) {
			case $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED:
				replaceInputMethodText(e);
			case $InputMethodEvent::CARET_POSITION_CHANGED:
				setInputMethodCaretPosition(e);
				break;
			}
		}
		e->consume();
	}
}

$InputMethodRequests* JTextComponent::getInputMethodRequests() {
	if (this->inputMethodRequestsHandler == nullptr) {
		$set(this, inputMethodRequestsHandler, $new($JTextComponent$InputMethodRequestsHandler, this));
		$var($Document, doc, getDocument());
		if (doc != nullptr) {
			doc->addDocumentListener($cast($DocumentListener, this->inputMethodRequestsHandler));
		}
	}
	return this->inputMethodRequestsHandler;
}

void JTextComponent::addInputMethodListener($InputMethodListener* l) {
	$JComponent::addInputMethodListener(l);
	if (l != nullptr) {
		this->needToSendKeyTypedEvent = false;
		this->checkedInputOverride = true;
	}
}

void JTextComponent::replaceInputMethodText($InputMethodEvent* e) {
	$useLocalObjectStack();
	int32_t commitCount = $nc(e)->getCommittedCharacterCount();
	$var($AttributedCharacterIterator, text, e->getText());
	int32_t composedTextIndex = 0;
	$var($Document, doc, getDocument());
	if (composedTextExists()) {
		try {
			int32_t var$0 = $nc(this->composedTextStart)->getOffset();
			int32_t var$1 = $nc(this->composedTextEnd)->getOffset();
			$nc(doc)->remove(var$0, var$1 - this->composedTextStart->getOffset());
		} catch ($BadLocationException& ble) {
		}
		$set(this, composedTextStart, $set(this, composedTextEnd, nullptr));
		$set(this, composedTextAttribute, nullptr);
		$set(this, composedTextContent, nullptr);
	}
	if (text != nullptr) {
		text->first();
		int32_t committedTextStartIndex = 0;
		int32_t committedTextEndIndex = 0;
		if (commitCount > 0) {
			committedTextStartIndex = $nc(this->caret)->getDot();
			if (shouldSynthensizeKeyEvents()) {
				for (char16_t c = text->current(); commitCount > 0; c = text->next(), --commitCount) {
					$var($KeyEvent, ke, $new($KeyEvent, this, $KeyEvent::KEY_TYPED, $EventQueue::getMostRecentEventTime(), 0, $KeyEvent::VK_UNDEFINED, c));
					processKeyEvent(ke);
				}
			} else {
				$var($StringBuilder, strBuf, $new($StringBuilder));
				for (char16_t c = text->current(); commitCount > 0; c = text->next(), --commitCount) {
					strBuf->append(c);
				}
				mapCommittedTextToAction($(strBuf->toString()));
			}
			committedTextEndIndex = $nc(this->caret)->getDot();
		}
		composedTextIndex = text->getIndex();
		if (composedTextIndex < text->getEndIndex()) {
			createComposedTextAttribute(composedTextIndex, text);
			try {
				replaceSelection(nullptr);
				$nc(doc)->insertString($nc(this->caret)->getDot(), this->composedTextContent, this->composedTextAttribute);
				int32_t var$2 = $nc(this->caret)->getDot();
				$set(this, composedTextStart, doc->createPosition(var$2 - $nc(this->composedTextContent)->length()));
				$set(this, composedTextEnd, doc->createPosition($nc(this->caret)->getDot()));
			} catch ($BadLocationException& ble) {
				$set(this, composedTextStart, $set(this, composedTextEnd, nullptr));
				$set(this, composedTextAttribute, nullptr);
				$set(this, composedTextContent, nullptr);
			}
		}
		if (committedTextStartIndex != committedTextEndIndex) {
			try {
				$set(this, latestCommittedTextStart, $nc(doc)->createPosition(committedTextStartIndex));
				$set(this, latestCommittedTextEnd, doc->createPosition(committedTextEndIndex));
			} catch ($BadLocationException& ble) {
				$set(this, latestCommittedTextStart, $set(this, latestCommittedTextEnd, nullptr));
			}
		} else {
			$set(this, latestCommittedTextStart, $set(this, latestCommittedTextEnd, nullptr));
		}
	}
}

void JTextComponent::createComposedTextAttribute(int32_t composedIndex, $AttributedCharacterIterator* text) {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	$var($StringBuilder, strBuf, $new($StringBuilder));
	for (char16_t c = $nc(text)->setIndex(composedIndex); c != $CharacterIterator::DONE; c = text->next()) {
		strBuf->append(c);
	}
	$set(this, composedTextContent, strBuf->toString());
	$set(this, composedTextAttribute, $new($SimpleAttributeSet));
	$init($StyleConstants);
	this->composedTextAttribute->addAttribute($StyleConstants::ComposedTextAttribute, $$new($AttributedString, text, composedIndex, text->getEndIndex()));
}

bool JTextComponent::saveComposedText(int32_t pos) {
	if (composedTextExists()) {
		int32_t start = $nc(this->composedTextStart)->getOffset();
		int32_t var$0 = $nc(this->composedTextEnd)->getOffset();
		int32_t len = var$0 - $nc(this->composedTextStart)->getOffset();
		if (pos >= start && pos <= start + len) {
			try {
				$$nc(getDocument())->remove(start, len);
				return true;
			} catch ($BadLocationException& ble) {
			}
		}
	}
	return false;
}

void JTextComponent::restoreComposedText() {
	$var($Document, doc, getDocument());
	try {
		$nc(doc)->insertString($nc(this->caret)->getDot(), this->composedTextContent, this->composedTextAttribute);
		int32_t var$0 = $nc(this->caret)->getDot();
		$set(this, composedTextStart, doc->createPosition(var$0 - $nc(this->composedTextContent)->length()));
		$set(this, composedTextEnd, doc->createPosition($nc(this->caret)->getDot()));
	} catch ($BadLocationException& ble) {
	}
}

void JTextComponent::mapCommittedTextToAction($String* committedText) {
	$useLocalObjectStack();
	$var($Keymap, binding, getKeymap());
	if (binding != nullptr) {
		$var($Action, a, nullptr);
		if ($nc(committedText)->length() == 1) {
			$var($KeyStroke, k, $KeyStroke::getKeyStroke(committedText->charAt(0)));
			$assign(a, binding->getAction(k));
		}
		if (a == nullptr) {
			$assign(a, binding->getDefaultAction());
		}
		if (a != nullptr) {
			int64_t var$0 = $EventQueue::getMostRecentEventTime();
			$var($ActionEvent, ae, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, committedText, var$0, getCurrentEventModifiers()));
			a->actionPerformed(ae);
		}
	}
}

void JTextComponent::setInputMethodCaretPosition($InputMethodEvent* e) {
	$useLocalObjectStack();
	int32_t dot = 0;
	if (composedTextExists()) {
		dot = $nc(this->composedTextStart)->getOffset();
		if (!($instanceOf($JTextComponent$ComposedTextCaret, this->caret))) {
			if (this->composedTextCaret == nullptr) {
				$set(this, composedTextCaret, $new($JTextComponent$ComposedTextCaret, this));
			}
			$set(this, originalCaret, this->caret);
			exchangeCaret(this->originalCaret, this->composedTextCaret);
		}
		$var($TextHitInfo, caretPos, $nc(e)->getCaret());
		if (caretPos != nullptr) {
			int32_t index = caretPos->getInsertionIndex();
			dot += index;
			if (index == 0) {
				try {
					$var($Rectangle, d, modelToView(dot));
					$var($Rectangle, end, modelToView($nc(this->composedTextEnd)->getOffset()));
					$var($Rectangle, b, getBounds());
					$nc(d)->x += $Math::min($nc(end)->x - $nc(d)->x, $nc(b)->width);
					scrollRectToVisible(d);
				} catch ($BadLocationException& ble) {
				}
			}
		}
		$nc(this->caret)->setDot(dot);
	} else if ($instanceOf($JTextComponent$ComposedTextCaret, this->caret)) {
		dot = this->caret->getDot();
		exchangeCaret(this->caret, this->originalCaret);
		$nc(this->caret)->setDot(dot);
	}
}

void JTextComponent::exchangeCaret($Caret* oldCaret, $Caret* newCaret) {
	int32_t blinkRate = $nc(oldCaret)->getBlinkRate();
	setCaret(newCaret);
	$nc(this->caret)->setBlinkRate(blinkRate);
	$nc(this->caret)->setVisible(hasFocus());
}

bool JTextComponent::shouldSynthensizeKeyEvents() {
	if (!this->checkedInputOverride) {
		this->needToSendKeyTypedEvent = !$$sure($Boolean, $nc(JTextComponent::METHOD_OVERRIDDEN)->get($of(this)->getClass()))->booleanValue();
		this->checkedInputOverride = true;
	}
	return this->needToSendKeyTypedEvent;
}

bool JTextComponent::composedTextExists() {
	return (this->composedTextStart != nullptr);
}

void JTextComponent::clinit$($Class* clazz) {
	$assignStatic(JTextComponent::FOCUS_ACCELERATOR_KEY, "focusAcceleratorKey"_s);
	$assignStatic(JTextComponent::DEFAULT_KEYMAP, "default"_s);
	{
		$SwingAccessor::setJTextComponentAccessor($$new($JTextComponent$1));
	}
	$init($Cache$Kind);
	$assignStatic(JTextComponent::METHOD_OVERRIDDEN, $new($JTextComponent$4, $Cache$Kind::WEAK, $Cache$Kind::STRONG));
	$assignStatic(JTextComponent::KEYMAP_TABLE, $new($StringBuilder, "JTextComponent_KeymapTable"_s));
	$assignStatic(JTextComponent::FOCUSED_COMPONENT, $new($StringBuilder, "JTextComponent_FocusedComponent"_s));
}

JTextComponent::JTextComponent() {
}

$Class* JTextComponent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FOCUS_ACCELERATOR_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTextComponent, FOCUS_ACCELERATOR_KEY)},
		{"model", "Ljavax/swing/text/Document;", nullptr, $PRIVATE, $field(JTextComponent, model)},
		{"caret", "Ljavax/swing/text/Caret;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, caret)},
		{"navigationFilter", "Ljavax/swing/text/NavigationFilter;", nullptr, $PRIVATE, $field(JTextComponent, navigationFilter)},
		{"highlighter", "Ljavax/swing/text/Highlighter;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, highlighter)},
		{"keymap", "Ljavax/swing/text/Keymap;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, keymap)},
		{"caretEvent", "Ljavax/swing/text/JTextComponent$MutableCaretEvent;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, caretEvent)},
		{"caretColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(JTextComponent, caretColor)},
		{"selectionColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(JTextComponent, selectionColor)},
		{"selectedTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(JTextComponent, selectedTextColor)},
		{"disabledTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(JTextComponent, disabledTextColor)},
		{"editable", "Z", nullptr, $PRIVATE, $field(JTextComponent, editable)},
		{"margin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JTextComponent, margin)},
		{"focusAccelerator", "C", nullptr, $PRIVATE, $field(JTextComponent, focusAccelerator)},
		{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JTextComponent, dragEnabled)},
		{"dropMode", "Ljavax/swing/DropMode;", nullptr, $PRIVATE, $field(JTextComponent, dropMode)},
		{"dropLocation", "Ljavax/swing/text/JTextComponent$DropLocation;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, dropLocation)},
		{"defaultTransferHandler", "Ljavax/swing/text/JTextComponent$DefaultTransferHandler;", nullptr, $PRIVATE | $STATIC, $staticField(JTextComponent, defaultTransferHandler)},
		{"METHOD_OVERRIDDEN", "Lcom/sun/beans/util/Cache;", "Lcom/sun/beans/util/Cache<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC, $staticField(JTextComponent, METHOD_OVERRIDDEN)},
		{"KEYMAP_TABLE", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextComponent, KEYMAP_TABLE)},
		{"inputMethodRequestsHandler", "Ljava/awt/im/InputMethodRequests;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, inputMethodRequestsHandler)},
		{"composedTextAttribute", "Ljavax/swing/text/SimpleAttributeSet;", nullptr, $PRIVATE, $field(JTextComponent, composedTextAttribute)},
		{"composedTextContent", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JTextComponent, composedTextContent)},
		{"composedTextStart", "Ljavax/swing/text/Position;", nullptr, $PRIVATE, $field(JTextComponent, composedTextStart)},
		{"composedTextEnd", "Ljavax/swing/text/Position;", nullptr, $PRIVATE, $field(JTextComponent, composedTextEnd)},
		{"latestCommittedTextStart", "Ljavax/swing/text/Position;", nullptr, $PRIVATE, $field(JTextComponent, latestCommittedTextStart)},
		{"latestCommittedTextEnd", "Ljavax/swing/text/Position;", nullptr, $PRIVATE, $field(JTextComponent, latestCommittedTextEnd)},
		{"composedTextCaret", "Ljavax/swing/text/JTextComponent$ComposedTextCaret;", nullptr, $PRIVATE, $field(JTextComponent, composedTextCaret)},
		{"originalCaret", "Ljavax/swing/text/Caret;", nullptr, $PRIVATE | $TRANSIENT, $field(JTextComponent, originalCaret)},
		{"checkedInputOverride", "Z", nullptr, $PRIVATE, $field(JTextComponent, checkedInputOverride)},
		{"needToSendKeyTypedEvent", "Z", nullptr, $PRIVATE, $field(JTextComponent, needToSendKeyTypedEvent)},
		{"FOCUSED_COMPONENT", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextComponent, FOCUSED_COMPONENT)},
		{"DEFAULT_KEYMAP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTextComponent, DEFAULT_KEYMAP)},
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
	$NamedAttribute getActionsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getActionsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getActionsmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getCaretmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getCaretListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getCaretListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getCaretListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getCaretPositionmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getDropLocationmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getDropLocationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getDropLocationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getInputMethodRequestsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getInputMethodRequestsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getInputMethodRequestsmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute getScrollableTracksViewportHeightmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getScrollableTracksViewportHeightmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getScrollableTracksViewportHeightmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute getSelectedTextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getSelectionEndmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute getSelectionStartmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute modelToViewmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute modelToViewmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", modelToViewmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCaretmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "the caret used to select/navigate"},
		{}
	};
	$CompoundAttribute setCaretmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCaretmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCaretColormethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "the color used to render the caret"},
		{}
	};
	$CompoundAttribute setCaretColormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCaretColormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCaretPositionmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "the caret position"},
		{}
	};
	$CompoundAttribute setCaretPositionmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCaretPositionmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDisabledTextColormethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "color used to render disabled text"},
		{}
	};
	$CompoundAttribute setDisabledTextColormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDisabledTextColormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDocumentmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "the text document model"},
		{}
	};
	$CompoundAttribute setDocumentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDocumentmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDragEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "determines whether automatic drag handling is enabled"},
		{}
	};
	$CompoundAttribute setDragEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDragEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setEditablemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "specifies if the text can be edited"},
		{}
	};
	$CompoundAttribute setEditablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setEditablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFocusAcceleratormethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "accelerator character used to grab focus"},
		{}
	};
	$CompoundAttribute setFocusAcceleratormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFocusAcceleratormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setHighlightermethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "object responsible for background highlights"},
		{}
	};
	$CompoundAttribute setHighlightermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHighlightermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setKeymapmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "set of key event to action bindings to use"},
		{}
	};
	$CompoundAttribute setKeymapmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setKeymapmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMarginmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "desired space between the border and text area"},
		{}
	};
	$CompoundAttribute setMarginmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMarginmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectedTextColormethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "color used to render selected text"},
		{}
	};
	$CompoundAttribute setSelectedTextColormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectedTextColormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionColormethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "color used to render selection background"},
		{}
	};
	$CompoundAttribute setSelectionColormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionColormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionEndmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "ending location of the selection."},
		{}
	};
	$CompoundAttribute setSelectionEndmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionEndmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionStartmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "starting location of the selection."},
		{}
	};
	$CompoundAttribute setSelectionStartmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionStartmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "the text of this component"},
		{}
	};
	$CompoundAttribute setTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute viewToModelmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute viewToModelmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", viewToModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextComponent, init$, void)},
		{"addCaretListener", "(Ljavax/swing/event/CaretListener;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, addCaretListener, void, $CaretListener*)},
		{"addInputMethodListener", "(Ljava/awt/event/InputMethodListener;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, addInputMethodListener, void, $InputMethodListener*)},
		{"addKeymap", "(Ljava/lang/String;Ljavax/swing/text/Keymap;)Ljavax/swing/text/Keymap;", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextComponent, addKeymap, $Keymap*, $String*, $Keymap*)},
		{"checkDragEnabled", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTextComponent, checkDragEnabled, void, bool)},
		{"checkDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTextComponent, checkDropMode, void, $DropMode*)},
		{"composedTextExists", "()Z", nullptr, 0, $virtualMethod(JTextComponent, composedTextExists, bool)},
		{"copy", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, copy, void)},
		{"createComposedTextAttribute", "(ILjava/text/AttributedCharacterIterator;)V", nullptr, $PRIVATE, $method(JTextComponent, createComposedTextAttribute, void, int32_t, $AttributedCharacterIterator*)},
		{"cut", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, cut, void)},
		{"dropLocationForPoint", "(Ljava/awt/Point;)Ljavax/swing/text/JTextComponent$DropLocation;", nullptr, 0, $virtualMethod(JTextComponent, dropLocationForPoint, $TransferHandler$DropLocation*, $Point*)},
		{"exchangeCaret", "(Ljavax/swing/text/Caret;Ljavax/swing/text/Caret;)V", nullptr, $PRIVATE, $method(JTextComponent, exchangeCaret, void, $Caret*, $Caret*)},
		{"fireCaretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PROTECTED, $virtualMethod(JTextComponent, fireCaretUpdate, void, $CaretEvent*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getActions, $ActionArray*), nullptr, nullptr, getActionsmethodAnnotations$$},
		{"getCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getCaret, $Caret*), nullptr, nullptr, getCaretmethodAnnotations$$},
		{"getCaretColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getCaretColor, $Color*)},
		{"getCaretListeners", "()[Ljavax/swing/event/CaretListener;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getCaretListeners, $CaretListenerArray*), nullptr, nullptr, getCaretListenersmethodAnnotations$$},
		{"getCaretPosition", "()I", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getCaretPosition, int32_t), nullptr, nullptr, getCaretPositionmethodAnnotations$$},
		{"getCurrentEventModifiers", "()I", nullptr, $PRIVATE, $method(JTextComponent, getCurrentEventModifiers, int32_t)},
		{"getDisabledTextColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getDisabledTextColor, $Color*)},
		{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getDocument, $Document*)},
		{"getDragEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getDragEnabled, bool)},
		{"getDropLocation", "()Ljavax/swing/text/JTextComponent$DropLocation;", nullptr, $PUBLIC | $FINAL, $method(JTextComponent, getDropLocation, $JTextComponent$DropLocation*), nullptr, nullptr, getDropLocationmethodAnnotations$$},
		{"getDropMode", "()Ljavax/swing/DropMode;", nullptr, $PUBLIC | $FINAL, $method(JTextComponent, getDropMode, $DropMode*)},
		{"getFocusAccelerator", "()C", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getFocusAccelerator, char16_t)},
		{"getFocusedComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $FINAL, $staticMethod(JTextComponent, getFocusedComponent, JTextComponent*)},
		{"getHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getHighlighter, $Highlighter*)},
		{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getInputMethodRequests, $InputMethodRequests*), nullptr, nullptr, getInputMethodRequestsmethodAnnotations$$},
		{"getKeymap", "()Ljavax/swing/text/Keymap;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getKeymap, $Keymap*)},
		{"getKeymap", "(Ljava/lang/String;)Ljavax/swing/text/Keymap;", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextComponent, getKeymap, $Keymap*, $String*)},
		{"getKeymapTable", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Ljavax/swing/text/Keymap;>;", $PRIVATE | $STATIC, $staticMethod(JTextComponent, getKeymapTable, $HashMap*)},
		{"getMargin", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getMargin, $Insets*)},
		{"getNavigationFilter", "()Ljavax/swing/text/NavigationFilter;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getNavigationFilter, $NavigationFilter*)},
		{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getPreferredScrollableViewportSize, $Dimension*), nullptr, nullptr, getPreferredScrollableViewportSizemethodAnnotations$$},
		{"getPrintable", "(Ljava/text/MessageFormat;Ljava/text/MessageFormat;)Ljava/awt/print/Printable;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getPrintable, $Printable*, $MessageFormat*, $MessageFormat*)},
		{"getScrollableBlockIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getScrollableBlockIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
		{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getScrollableTracksViewportHeight, bool), nullptr, nullptr, getScrollableTracksViewportHeightmethodAnnotations$$},
		{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getScrollableTracksViewportWidth, bool), nullptr, nullptr, getScrollableTracksViewportWidthmethodAnnotations$$},
		{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getScrollableUnitIncrement, int32_t, $Rectangle*, int32_t, int32_t)},
		{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getSelectedText, $String*), nullptr, nullptr, getSelectedTextmethodAnnotations$$},
		{"getSelectedTextColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getSelectedTextColor, $Color*)},
		{"getSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getSelectionColor, $Color*)},
		{"getSelectionEnd", "()I", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getSelectionEnd, int32_t), nullptr, nullptr, getSelectionEndmethodAnnotations$$},
		{"getSelectionStart", "()I", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getSelectionStart, int32_t), nullptr, nullptr, getSelectionStartmethodAnnotations$$},
		{"getText", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getText, $String*, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getText, $String*)},
		{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getToolTipText, $String*, $MouseEvent*)},
		{"getUI", "()Ljavax/swing/plaf/TextUI;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, getUI, $ComponentUI*)},
		{"installDefaultTransferHandlerIfNecessary", "()V", nullptr, $PRIVATE, $method(JTextComponent, installDefaultTransferHandlerIfNecessary, void)},
		{"invokeAction", "(Ljava/lang/String;Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(JTextComponent, invokeAction, void, $String*, $Action*)},
		{"isEditable", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, isEditable, bool)},
		{"loadKeymap", "(Ljavax/swing/text/Keymap;[Ljavax/swing/text/JTextComponent$KeyBinding;[Ljavax/swing/Action;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextComponent, loadKeymap, void, $Keymap*, $JTextComponent$KeyBindingArray*, $ActionArray*)},
		{"mapCommittedTextToAction", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(JTextComponent, mapCommittedTextToAction, void, $String*)},
		{"modelToView", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JTextComponent, modelToView, $Rectangle*, int32_t), "javax.swing.text.BadLocationException", nullptr, modelToViewmethodAnnotations$$},
		{"modelToView2D", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(JTextComponent, modelToView2D, $Rectangle2D*, int32_t), "javax.swing.text.BadLocationException"},
		{"moveCaretPosition", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, moveCaretPosition, void, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JTextComponent, paramString, $String*)},
		{"paste", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, paste, void)},
		{"print", "()Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, print, bool), "java.awt.print.PrinterException"},
		{"print", "(Ljava/text/MessageFormat;Ljava/text/MessageFormat;)Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, print, bool, $MessageFormat*, $MessageFormat*), "java.awt.print.PrinterException"},
		{"print", "(Ljava/text/MessageFormat;Ljava/text/MessageFormat;ZLjavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;Z)Z", nullptr, $PUBLIC, $virtualMethod(JTextComponent, print, bool, $MessageFormat*, $MessageFormat*, bool, $PrintService*, $PrintRequestAttributeSet*, bool), "java.awt.print.PrinterException"},
		{"processInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PROTECTED, $virtualMethod(JTextComponent, processInputMethodEvent, void, $InputMethodEvent*)},
		{"read", "(Ljava/io/Reader;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, read, void, $Reader*, Object$*), "java.io.IOException"},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JTextComponent, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"removeCaretListener", "(Ljavax/swing/event/CaretListener;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, removeCaretListener, void, $CaretListener*)},
		{"removeKeymap", "(Ljava/lang/String;)Ljavax/swing/text/Keymap;", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextComponent, removeKeymap, $Keymap*, $String*)},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, removeNotify, void)},
		{"replaceInputMethodText", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PRIVATE, $method(JTextComponent, replaceInputMethodText, void, $InputMethodEvent*)},
		{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, replaceSelection, void, $String*)},
		{"restoreComposedText", "()V", nullptr, $PROTECTED, $virtualMethod(JTextComponent, restoreComposedText, void)},
		{"saveComposedText", "(I)Z", nullptr, $PROTECTED, $virtualMethod(JTextComponent, saveComposedText, bool, int32_t)},
		{"select", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, select, void, int32_t, int32_t)},
		{"selectAll", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, selectAll, void)},
		{"setCaret", "(Ljavax/swing/text/Caret;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setCaret, void, $Caret*), nullptr, nullptr, setCaretmethodAnnotations$$},
		{"setCaretColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setCaretColor, void, $Color*), nullptr, nullptr, setCaretColormethodAnnotations$$},
		{"setCaretPosition", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setCaretPosition, void, int32_t), nullptr, nullptr, setCaretPositionmethodAnnotations$$},
		{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setComponentOrientation, void, $ComponentOrientation*)},
		{"setDisabledTextColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setDisabledTextColor, void, $Color*), nullptr, nullptr, setDisabledTextColormethodAnnotations$$},
		{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setDocument, void, $Document*), nullptr, nullptr, setDocumentmethodAnnotations$$},
		{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setDragEnabled, void, bool), nullptr, nullptr, setDragEnabledmethodAnnotations$$},
		{"setDropLocation", "(Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, 0, $virtualMethod(JTextComponent, setDropLocation, $Object*, $TransferHandler$DropLocation*, Object$*, bool)},
		{"setDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PUBLIC | $FINAL, $method(JTextComponent, setDropMode, void, $DropMode*)},
		{"setEditable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setEditable, void, bool), nullptr, nullptr, setEditablemethodAnnotations$$},
		{"setFocusAccelerator", "(C)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setFocusAccelerator, void, char16_t), nullptr, nullptr, setFocusAcceleratormethodAnnotations$$},
		{"setHighlighter", "(Ljavax/swing/text/Highlighter;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setHighlighter, void, $Highlighter*), nullptr, nullptr, setHighlightermethodAnnotations$$},
		{"setInputMethodCaretPosition", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PRIVATE, $method(JTextComponent, setInputMethodCaretPosition, void, $InputMethodEvent*)},
		{"setKeymap", "(Ljavax/swing/text/Keymap;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setKeymap, void, $Keymap*), nullptr, nullptr, setKeymapmethodAnnotations$$},
		{"setMargin", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setMargin, void, $Insets*), nullptr, nullptr, setMarginmethodAnnotations$$},
		{"setNavigationFilter", "(Ljavax/swing/text/NavigationFilter;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setNavigationFilter, void, $NavigationFilter*)},
		{"setSelectedTextColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setSelectedTextColor, void, $Color*), nullptr, nullptr, setSelectedTextColormethodAnnotations$$},
		{"setSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setSelectionColor, void, $Color*), nullptr, nullptr, setSelectionColormethodAnnotations$$},
		{"setSelectionEnd", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setSelectionEnd, void, int32_t), nullptr, nullptr, setSelectionEndmethodAnnotations$$},
		{"setSelectionStart", "(I)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setSelectionStart, void, int32_t), nullptr, nullptr, setSelectionStartmethodAnnotations$$},
		{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setText, void, $String*), nullptr, nullptr, setTextmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/TextUI;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, setUI, void, $TextUI*)},
		{"shouldSynthensizeKeyEvents", "()Z", nullptr, $PRIVATE, $method(JTextComponent, shouldSynthensizeKeyEvents, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateInputMap", "(Ljavax/swing/text/Keymap;Ljavax/swing/text/Keymap;)V", nullptr, 0, $virtualMethod(JTextComponent, updateInputMap, void, $Keymap*, $Keymap*)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, updateUI, void)},
		{"viewToModel", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(JTextComponent, viewToModel, int32_t, $Point*), nullptr, nullptr, viewToModelmethodAnnotations$$},
		{"viewToModel2D", "(Ljava/awt/geom/Point2D;)I", nullptr, $PUBLIC, $virtualMethod(JTextComponent, viewToModel2D, int32_t, $Point2D*)},
		{"write", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent, write, void, $Writer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.text.JTextComponent$DoSetCaretPosition", "javax.swing.text.JTextComponent", "DoSetCaretPosition", $PRIVATE},
		{"javax.swing.text.JTextComponent$ComposedTextCaret", "javax.swing.text.JTextComponent", "ComposedTextCaret", 0},
		{"javax.swing.text.JTextComponent$InputMethodRequestsHandler", "javax.swing.text.JTextComponent", "InputMethodRequestsHandler", 0},
		{"javax.swing.text.JTextComponent$MutableCaretEvent", "javax.swing.text.JTextComponent", "MutableCaretEvent", $STATIC},
		{"javax.swing.text.JTextComponent$KeymapActionMap", "javax.swing.text.JTextComponent", "KeymapActionMap", $STATIC},
		{"javax.swing.text.JTextComponent$KeymapWrapper", "javax.swing.text.JTextComponent", "KeymapWrapper", $STATIC},
		{"javax.swing.text.JTextComponent$DefaultKeymap", "javax.swing.text.JTextComponent", "DefaultKeymap", $STATIC},
		{"javax.swing.text.JTextComponent$DefaultTransferHandler", "javax.swing.text.JTextComponent", "DefaultTransferHandler", $STATIC},
		{"javax.swing.text.JTextComponent$DropLocation", "javax.swing.text.JTextComponent", "DropLocation", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
		{"javax.swing.text.JTextComponent$KeyBinding", "javax.swing.text.JTextComponent", "KeyBinding", $PUBLIC | $STATIC},
		{"javax.swing.text.JTextComponent$4", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$2", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.text.JTextComponent",
		"javax.swing.JComponent",
		"javax.swing.Scrollable,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.text.JTextComponent$5,javax.swing.text.JTextComponent$DoSetCaretPosition,javax.swing.text.JTextComponent$ComposedTextCaret,javax.swing.text.JTextComponent$InputMethodRequestsHandler,javax.swing.text.JTextComponent$MutableCaretEvent,javax.swing.text.JTextComponent$KeymapActionMap,javax.swing.text.JTextComponent$KeymapWrapper,javax.swing.text.JTextComponent$DefaultKeymap,javax.swing.text.JTextComponent$DefaultTransferHandler,javax.swing.text.JTextComponent$DropLocation,javax.swing.text.JTextComponent$AccessibleJTextComponent,javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment,javax.swing.text.JTextComponent$AccessibleJTextComponent$4,javax.swing.text.JTextComponent$AccessibleJTextComponent$3,javax.swing.text.JTextComponent$AccessibleJTextComponent$2,javax.swing.text.JTextComponent$AccessibleJTextComponent$1,javax.swing.text.JTextComponent$KeyBinding,javax.swing.text.JTextComponent$4,javax.swing.text.JTextComponent$4$1,javax.swing.text.JTextComponent$3,javax.swing.text.JTextComponent$3$2,javax.swing.text.JTextComponent$3$1,javax.swing.text.JTextComponent$2,javax.swing.text.JTextComponent$1"
	};
	$loadClass(JTextComponent, name, initialize, &classInfo$$, JTextComponent::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextComponent));
	});
	return class$;
}

$Class* JTextComponent::class$ = nullptr;

		} // text
	} // swing
} // javax