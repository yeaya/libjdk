#include <bug7193219.h>
#include <bug7193219$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug7193219$1 = ::bug7193219$1;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug7193219::init$() {
}

$bytes* bug7193219::serializeGUI() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame, "Serialization"_s));
	$var($JPanel, mainPanel, $new($JPanel));
	$var($JComboBox, status, $new($JComboBox));
	status->addItem("123"_s);
	mainPanel->add(status);
	$$nc(frame->getContentPane())->add(mainPanel);
	frame->pack();
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
		oos->writeObject(mainPanel);
		oos->flush();
		frame->dispose();
		return baos->toByteArray();
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, ioe);
	}
	$shouldNotReachHere();
}

void bug7193219::deserializeGUI($bytes* serializedData) {
	$useLocalObjectStack();
	try {
		$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, serializedData)));
		$var($JPanel, mainPanel, $cast($JPanel, ois->readObject()));
		$var($JFrame, frame, $new($JFrame, "Deserialization"_s));
		$$nc(frame->getContentPane())->add(mainPanel);
		frame->pack();
		frame->dispose();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug7193219::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug7193219$1));
}

bug7193219::bug7193219() {
}

$Class* bug7193219::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7193219, init$, void)},
		{"deserializeGUI", "([B)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7193219, deserializeGUI, void, $bytes*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7193219, main, void, $StringArray*), "java.lang.Exception"},
		{"serializeGUI", "()[B", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7193219, serializeGUI, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7193219$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7193219",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7193219$1"
	};
	$loadClass(bug7193219, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7193219);
	});
	return class$;
}

$Class* bug7193219::class$ = nullptr;