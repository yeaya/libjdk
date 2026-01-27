#include <java/awt/TextComponent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/SystemColor.h>
#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/event/TextListener.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/TextComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/InputMethodSupport.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef INPUT_METHODS_ENABLED_MASK
#undef TEXT_CURSOR
#undef TEXT_EVENT_MASK
#undef TEXT_VALUE_CHANGED

using $TextListenerArray = $Array<::java::awt::event::TextListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Cursor = ::java::awt::Cursor;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $SystemColor = ::java::awt::SystemColor;
using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $Toolkit = ::java::awt::Toolkit;
using $TextEvent = ::java::awt::event::TextEvent;
using $TextListener = ::java::awt::event::TextListener;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $TextComponentPeer = ::java::awt::peer::TextComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $InputMethodSupport = ::sun::awt::InputMethodSupport;

namespace java {
	namespace awt {

$FieldInfo _TextComponent_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, 0, $field(TextComponent, text)},
	{"editable", "Z", nullptr, 0, $field(TextComponent, editable)},
	{"selectionStart", "I", nullptr, 0, $field(TextComponent, selectionStart)},
	{"selectionEnd", "I", nullptr, 0, $field(TextComponent, selectionEnd)},
	{"backgroundSetByClientCode", "Z", nullptr, 0, $field(TextComponent, backgroundSetByClientCode)},
	{"textListener", "Ljava/awt/event/TextListener;", nullptr, $PROTECTED | $TRANSIENT, $field(TextComponent, textListener)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextComponent, serialVersionUID)},
	{"textComponentSerializedDataVersion", "I", nullptr, $PRIVATE, $field(TextComponent, textComponentSerializedDataVersion)},
	{"checkForEnableIM", "Z", nullptr, $PRIVATE, $field(TextComponent, checkForEnableIM)},
	{}
};

$MethodInfo _TextComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(TextComponent, init$, void, $String*), "java.awt.HeadlessException"},
	{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(TextComponent, addNotify, void)},
	{"addTextListener", "(Ljava/awt/event/TextListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, addTextListener, void, $TextListener*)},
	{"areInputMethodsEnabled", "()Z", nullptr, 0, $virtualMethod(TextComponent, areInputMethodsEnabled, bool)},
	{"canAccessClipboard", "()Z", nullptr, $PRIVATE, $method(TextComponent, canAccessClipboard, bool)},
	{"enableInputMethods", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TextComponent, enableInputMethods, void, bool)},
	{"enableInputMethodsIfNecessary", "()V", nullptr, $PRIVATE, $method(TextComponent, enableInputMethodsIfNecessary, void)},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0, $virtualMethod(TextComponent, eventEnabled, bool, $AWTEvent*)},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(TextComponent, getAccessibleContext, $AccessibleContext*)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(TextComponent, getBackground, $Color*)},
	{"getCaretPosition", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, getCaretPosition, int32_t)},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC, $virtualMethod(TextComponent, getInputMethodRequests, $InputMethodRequests*)},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC, $virtualMethod(TextComponent, getListeners, $EventListenerArray*, $Class*)},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, getSelectedText, $String*)},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, getSelectionEnd, int32_t)},
	{"getSelectionStart", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, getSelectionStart, int32_t)},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, getText, $String*)},
	{"getTextListeners", "()[Ljava/awt/event/TextListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, getTextListeners, $TextListenerArray*)},
	{"isEditable", "()Z", nullptr, $PUBLIC, $virtualMethod(TextComponent, isEditable, bool)},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TextComponent, paramString, $String*)},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED, $virtualMethod(TextComponent, processEvent, void, $AWTEvent*)},
	{"processTextEvent", "(Ljava/awt/event/TextEvent;)V", nullptr, $PROTECTED, $virtualMethod(TextComponent, processTextEvent, void, $TextEvent*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(TextComponent, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(TextComponent, removeNotify, void)},
	{"removeTextListener", "(Ljava/awt/event/TextListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, removeTextListener, void, $TextListener*)},
	{"select", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, select, void, int32_t, int32_t)},
	{"selectAll", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, selectAll, void)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(TextComponent, setBackground, void, $Color*)},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, setCaretPosition, void, int32_t)},
	{"setEditable", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, setEditable, void, bool)},
	{"setSelectionEnd", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, setSelectionEnd, void, int32_t)},
	{"setSelectionStart", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, setSelectionStart, void, int32_t)},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TextComponent, setText, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(TextComponent, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _TextComponent_InnerClassesInfo_[] = {
	{"java.awt.TextComponent$AccessibleAWTTextComponent", "java.awt.TextComponent", "AccessibleAWTTextComponent", $PROTECTED},
	{}
};

$ClassInfo _TextComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TextComponent",
	"java.awt.Component",
	"javax.accessibility.Accessible",
	_TextComponent_FieldInfo_,
	_TextComponent_MethodInfo_,
	nullptr,
	nullptr,
	_TextComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.TextComponent$AccessibleAWTTextComponent"
};

$Object* allocate$TextComponent($Class* clazz) {
	return $of($alloc(TextComponent));
}

$String* TextComponent::toString() {
	 return this->$Component::toString();
}

int32_t TextComponent::hashCode() {
	 return this->$Component::hashCode();
}

bool TextComponent::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* TextComponent::clone() {
	 return this->$Component::clone();
}

void TextComponent::finalize() {
	this->$Component::finalize();
}

void TextComponent::init$($String* text) {
	$Component::init$();
	this->editable = true;
	this->backgroundSetByClientCode = false;
	this->textComponentSerializedDataVersion = 1;
	this->checkForEnableIM = true;
	$GraphicsEnvironment::checkHeadless();
	$set(this, text, (text != nullptr) ? text : ""_s);
	setCursor($($Cursor::getPredefinedCursor($Cursor::TEXT_CURSOR)));
}

void TextComponent::enableInputMethodsIfNecessary() {
	if (this->checkForEnableIM) {
		this->checkForEnableIM = false;
		try {
			$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
			bool shouldEnable = false;
			if ($instanceOf($InputMethodSupport, toolkit)) {
				shouldEnable = $nc(($cast($InputMethodSupport, toolkit)))->enableInputMethodsForTextComponent();
			}
			enableInputMethods(shouldEnable);
		} catch ($Exception& e) {
		}
	}
}

void TextComponent::enableInputMethods(bool enable) {
	this->checkForEnableIM = false;
	$Component::enableInputMethods(enable);
}

bool TextComponent::areInputMethodsEnabled() {
	if (this->checkForEnableIM) {
		enableInputMethodsIfNecessary();
	}
	return ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHODS_ENABLED_MASK)) != 0;
}

$InputMethodRequests* TextComponent::getInputMethodRequests() {
	$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
	if (peer != nullptr) {
		return peer->getInputMethodRequests();
	} else {
		return nullptr;
	}
}

void TextComponent::addNotify() {
	$Component::addNotify();
	enableInputMethodsIfNecessary();
}

void TextComponent::removeNotify() {
	$synchronized(getTreeLock()) {
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			$set(this, text, peer->getText());
			this->selectionStart = peer->getSelectionStart();
			this->selectionEnd = peer->getSelectionEnd();
		}
		$Component::removeNotify();
	}
}

void TextComponent::setText($String* t) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$set(this, text, (t != nullptr) ? t : ""_s);
		int32_t selectionStart = getSelectionStart();
		int32_t selectionEnd = getSelectionEnd();
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr && !$nc(this->text)->equals($(peer->getText()))) {
			peer->setText(this->text);
		}
		if (selectionStart != selectionEnd) {
			select(selectionStart, selectionEnd);
		}
	}
}

$String* TextComponent::getText() {
	$synchronized(this) {
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			$set(this, text, peer->getText());
		}
		return this->text;
	}
}

$String* TextComponent::getSelectedText() {
	$synchronized(this) {
		int32_t var$0 = getSelectionStart();
		return $nc($(getText()))->substring(var$0, getSelectionEnd());
	}
}

bool TextComponent::isEditable() {
	return this->editable;
}

void TextComponent::setEditable(bool b) {
	$synchronized(this) {
		if (this->editable == b) {
			return;
		}
		this->editable = b;
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			peer->setEditable(b);
		}
	}
}

$Color* TextComponent::getBackground() {
	if (!this->editable && !this->backgroundSetByClientCode) {
		$init($SystemColor);
		return $SystemColor::control;
	}
	return $Component::getBackground();
}

void TextComponent::setBackground($Color* c) {
	this->backgroundSetByClientCode = true;
	$Component::setBackground(c);
}

int32_t TextComponent::getSelectionStart() {
	$synchronized(this) {
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			this->selectionStart = peer->getSelectionStart();
		}
		return this->selectionStart;
	}
}

void TextComponent::setSelectionStart(int32_t selectionStart) {
	$synchronized(this) {
		select(selectionStart, getSelectionEnd());
	}
}

int32_t TextComponent::getSelectionEnd() {
	$synchronized(this) {
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			this->selectionEnd = peer->getSelectionEnd();
		}
		return this->selectionEnd;
	}
}

void TextComponent::setSelectionEnd(int32_t selectionEnd) {
	$synchronized(this) {
		select(getSelectionStart(), selectionEnd);
	}
}

void TextComponent::select(int32_t selectionStart, int32_t selectionEnd) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, text, getText());
		if (selectionStart < 0) {
			selectionStart = 0;
		}
		if (selectionStart > $nc(text)->length()) {
			selectionStart = text->length();
		}
		if (selectionEnd > $nc(text)->length()) {
			selectionEnd = text->length();
		}
		if (selectionEnd < selectionStart) {
			selectionEnd = selectionStart;
		}
		this->selectionStart = selectionStart;
		this->selectionEnd = selectionEnd;
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			peer->select(selectionStart, selectionEnd);
		}
	}
}

void TextComponent::selectAll() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->selectionStart = 0;
		this->selectionEnd = $nc($(getText()))->length();
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			peer->select(this->selectionStart, this->selectionEnd);
		}
	}
}

void TextComponent::setCaretPosition(int32_t position) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (position < 0) {
			$throwNew($IllegalArgumentException, "position less than zero."_s);
		}
		int32_t maxposition = $nc($(getText()))->length();
		if (position > maxposition) {
			position = maxposition;
		}
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		if (peer != nullptr) {
			peer->setCaretPosition(position);
		} else {
			select(position, position);
		}
	}
}

int32_t TextComponent::getCaretPosition() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
		int32_t position = 0;
		if (peer != nullptr) {
			position = peer->getCaretPosition();
		} else {
			position = this->selectionStart;
		}
		int32_t maxposition = $nc($(getText()))->length();
		if (position > maxposition) {
			position = maxposition;
		}
		return position;
	}
}

void TextComponent::addTextListener($TextListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, textListener, $AWTEventMulticaster::add(this->textListener, l));
		this->newEventsOnly = true;
	}
}

void TextComponent::removeTextListener($TextListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, textListener, $AWTEventMulticaster::remove(this->textListener, l));
	}
}

$TextListenerArray* TextComponent::getTextListeners() {
	$synchronized(this) {
		$load($TextListener);
		return $fcast($TextListenerArray, getListeners($TextListener::class$));
	}
}

$EventListenerArray* TextComponent::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($TextListener);
	if (listenerType == $TextListener::class$) {
		$assign(l, this->textListener);
	} else {
		return $Component::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool TextComponent::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $TextEvent::TEXT_VALUE_CHANGED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::TEXT_EVENT_MASK)) != 0 || this->textListener != nullptr) {
			return true;
		}
		return false;
	}
	return $Component::eventEnabled(e);
}

void TextComponent::processEvent($AWTEvent* e) {
	if ($instanceOf($TextEvent, e)) {
		processTextEvent($cast($TextEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void TextComponent::processTextEvent($TextEvent* e) {
	$var($TextListener, listener, this->textListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $TextEvent::TEXT_VALUE_CHANGED:
			{
				listener->textValueChanged(e);
				break;
			}
		}
	}
}

$String* TextComponent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($Component::paramString()), ",text="_s}));
	$var($String, str, $concat(var$0, $(getText())));
	if (this->editable) {
		$plusAssign(str, ",editable"_s);
	}
	$var($String, var$1, $$str({str, ",selection="_s, $$str(getSelectionStart()), "-"_s}));
	return $concat(var$1, $$str(getSelectionEnd()));
}

bool TextComponent::canAccessClipboard() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		return true;
	}
	try {
		$init($AWTPermissions);
		$nc(sm)->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
		return true;
	} catch ($SecurityException& e) {
	}
	return false;
}

void TextComponent::writeObject($ObjectOutputStream* s) {
	$var($TextComponentPeer, peer, $cast($TextComponentPeer, this->peer));
	if (peer != nullptr) {
		$set(this, text, peer->getText());
		this->selectionStart = peer->getSelectionStart();
		this->selectionEnd = peer->getSelectionEnd();
	}
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::textListenerK, this->textListener);
	s->writeObject(nullptr);
}

void TextComponent::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$GraphicsEnvironment::checkHeadless();
	$nc(s)->defaultReadObject();
	$set(this, text, (this->text != nullptr) ? this->text : ""_s);
	select(this->selectionStart, this->selectionEnd);
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::textListenerK == key) {
			addTextListener(($cast($TextListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
	enableInputMethodsIfNecessary();
}

$AccessibleContext* TextComponent::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($TextComponent$AccessibleAWTTextComponent, this));
	}
	return this->accessibleContext;
}

TextComponent::TextComponent() {
}

$Class* TextComponent::load$($String* name, bool initialize) {
	$loadClass(TextComponent, name, initialize, &_TextComponent_ClassInfo_, allocate$TextComponent);
	return class$;
}

$Class* TextComponent::class$ = nullptr;

	} // awt
} // java