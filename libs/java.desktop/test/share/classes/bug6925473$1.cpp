#include <bug6925473$1.h>
#include <bug6925473.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;

void bug6925473$1::init$() {
}

void bug6925473$1::run() {
	$useLocalObjectStack();
	$var($JTextArea, textArea, $new($JTextArea, "Copyright 2010 Sun Microsystems, Inc.  All Rights Reserved. DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER. This code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 only, as published by the Free Software Foundation. "_s));
	$var($Dimension, preferredSize, textArea->getPreferredSize());
	if ($nc(preferredSize)->width <= 0 || preferredSize->height <= 0) {
		$throwNew($RuntimeException, $$str({"Invalid preferred size "_s, preferredSize}));
	}
	$var($JTextArea, textAreaLW, $new($JTextArea, "Copyright 2010 Sun Microsystems, Inc.  All Rights Reserved. DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER. This code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 only, as published by the Free Software Foundation. "_s));
	textAreaLW->setLineWrap(true);
	$var($Dimension, preferredSizeLW, textAreaLW->getPreferredSize());
	if ($nc(preferredSizeLW)->width <= 0 || preferredSizeLW->height <= 0) {
		$throwNew($RuntimeException, $$str({"Invalid preferred size "_s, preferredSizeLW}));
	}
}

bug6925473$1::bug6925473$1() {
}

$Class* bug6925473$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6925473$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6925473$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6925473",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6925473$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6925473$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6925473"
	};
	$loadClass(bug6925473$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6925473$1);
	});
	return class$;
}

$Class* bug6925473$1::class$ = nullptr;