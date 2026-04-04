#include <bug6925473.h>
#include <bug6925473$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef LONG_TEXT

using $bug6925473$1 = ::bug6925473$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$String* bug6925473::LONG_TEXT = nullptr;

void bug6925473::init$() {
}

void bug6925473::main($StringArray* args) {
	$init(bug6925473);
	$SwingUtilities::invokeAndWait($$new($bug6925473$1));
}

bug6925473::bug6925473() {
}

void bug6925473::clinit$($Class* clazz) {
	$assignStatic(bug6925473::LONG_TEXT, "Copyright 2010 Sun Microsystems, Inc.  All Rights Reserved. DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER. This code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 only, as published by the Free Software Foundation. "_s);
}

$Class* bug6925473::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LONG_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6925473, LONG_TEXT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6925473, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6925473, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6925473$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6925473",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6925473$1"
	};
	$loadClass(bug6925473, name, initialize, &classInfo$$, bug6925473::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6925473);
	});
	return class$;
}

$Class* bug6925473::class$ = nullptr;