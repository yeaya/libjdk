#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>

#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/resources/CompilerProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $Name = ::com::sun::tools::javac::util::Name;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Path = ::java::nio::file::Path;
using $List = ::java::util::List;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$FieldInfo _CompilerProperties$Notes_FieldInfo_[] = {
	{"CompressedDiags", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, CompressedDiags)},
	{"DeprecatedPlural", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, DeprecatedPlural)},
	{"DeprecatedPluralAdditional", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, DeprecatedPluralAdditional)},
	{"DeprecatedRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, DeprecatedRecompile)},
	{"Note", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, Note)},
	{"PreviewRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, PreviewRecompile)},
	{"RemovalPlural", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, RemovalPlural)},
	{"RemovalPluralAdditional", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, RemovalPluralAdditional)},
	{"RemovalRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, RemovalRecompile)},
	{"UncheckedPlural", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, UncheckedPlural)},
	{"UncheckedPluralAdditional", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, UncheckedPluralAdditional)},
	{"UncheckedRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, UncheckedRecompile)},
	{}
};

$MethodInfo _CompilerProperties$Notes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CompilerProperties$Notes, init$, void)},
	{"DeferredMethodInst", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeferredMethodInst, $JCDiagnostic$Note*, $Symbol*, $Type*, $Type*)},
	{"DeprecatedFilename", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeprecatedFilename, $JCDiagnostic$Note*, $File*)},
	{"DeprecatedFilename", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeprecatedFilename, $JCDiagnostic$Note*, $JavaFileObject*)},
	{"DeprecatedFilename", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeprecatedFilename, $JCDiagnostic$Note*, $Path*)},
	{"DeprecatedFilenameAdditional", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeprecatedFilenameAdditional, $JCDiagnostic$Note*, $File*)},
	{"DeprecatedFilenameAdditional", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeprecatedFilenameAdditional, $JCDiagnostic$Note*, $JavaFileObject*)},
	{"DeprecatedFilenameAdditional", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, DeprecatedFilenameAdditional, $JCDiagnostic$Note*, $Path*)},
	{"LambdaStat", "(ZLcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, LambdaStat, $JCDiagnostic$Note*, bool, $Symbol*)},
	{"MethodRefSearchResultsMulti", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;I)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, MethodRefSearchResultsMulti, $JCDiagnostic$Note*, $JCDiagnostic$Fragment*, $String*, int32_t)},
	{"MrefStat", "(ZLjava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, MrefStat, $JCDiagnostic$Note*, bool, $Void*)},
	{"MrefStat1", "(ZLcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, MrefStat1, $JCDiagnostic$Note*, bool, $Symbol*)},
	{"MultipleElements", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, MultipleElements, $JCDiagnostic$Note*, $String*, $String*, $String*)},
	{"PreviewFilename", "(Ljava/io/File;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewFilename, $JCDiagnostic$Note*, $File*, $Source*)},
	{"PreviewFilename", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewFilename, $JCDiagnostic$Note*, $JavaFileObject*, $Source*)},
	{"PreviewFilename", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewFilename, $JCDiagnostic$Note*, $Path*, $Source*)},
	{"PreviewFilenameAdditional", "(Ljava/io/File;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewFilenameAdditional, $JCDiagnostic$Note*, $File*, $Source*)},
	{"PreviewFilenameAdditional", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewFilenameAdditional, $JCDiagnostic$Note*, $JavaFileObject*, $Source*)},
	{"PreviewFilenameAdditional", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewFilenameAdditional, $JCDiagnostic$Note*, $Path*, $Source*)},
	{"PreviewPlural", "(Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewPlural, $JCDiagnostic$Note*, $Source*)},
	{"PreviewPluralAdditional", "(Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, PreviewPluralAdditional, $JCDiagnostic$Note*, $Source*)},
	{"ProcMessager", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, ProcMessager, $JCDiagnostic$Note*, $String*)},
	{"RemovalFilename", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, RemovalFilename, $JCDiagnostic$Note*, $File*)},
	{"RemovalFilename", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, RemovalFilename, $JCDiagnostic$Note*, $JavaFileObject*)},
	{"RemovalFilename", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, RemovalFilename, $JCDiagnostic$Note*, $Path*)},
	{"RemovalFilenameAdditional", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, RemovalFilenameAdditional, $JCDiagnostic$Note*, $File*)},
	{"RemovalFilenameAdditional", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, RemovalFilenameAdditional, $JCDiagnostic$Note*, $JavaFileObject*)},
	{"RemovalFilenameAdditional", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, RemovalFilenameAdditional, $JCDiagnostic$Note*, $Path*)},
	{"UncheckedFilename", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, UncheckedFilename, $JCDiagnostic$Note*, $File*)},
	{"UncheckedFilename", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, UncheckedFilename, $JCDiagnostic$Note*, $JavaFileObject*)},
	{"UncheckedFilename", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, UncheckedFilename, $JCDiagnostic$Note*, $Path*)},
	{"UncheckedFilenameAdditional", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, UncheckedFilenameAdditional, $JCDiagnostic$Note*, $File*)},
	{"UncheckedFilenameAdditional", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, UncheckedFilenameAdditional, $JCDiagnostic$Note*, $JavaFileObject*)},
	{"UncheckedFilenameAdditional", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, UncheckedFilenameAdditional, $JCDiagnostic$Note*, $Path*)},
	{"VerboseL2mDeduplicate", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseL2mDeduplicate, $JCDiagnostic$Note*, $Symbol*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $List*, $List*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $List*, $JCDiagnostic*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $List*, $JCDiagnostic$Fragment*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $JCDiagnostic*, $List*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $JCDiagnostic*, $JCDiagnostic*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $JCDiagnostic*, $JCDiagnostic$Fragment*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $JCDiagnostic$Fragment*, $List*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $JCDiagnostic$Fragment*, $JCDiagnostic*)},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti, $JCDiagnostic$Note*, $Name*, $Symbol*, int32_t, $String*, $JCDiagnostic$Fragment*, $JCDiagnostic$Fragment*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $List*, $List*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $List*, $JCDiagnostic*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $List*, $JCDiagnostic$Fragment*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $JCDiagnostic*, $List*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $JCDiagnostic*, $JCDiagnostic*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $JCDiagnostic*, $JCDiagnostic$Fragment*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $JCDiagnostic$Fragment*, $List*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $JCDiagnostic$Fragment*, $JCDiagnostic*)},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Notes, VerboseResolveMulti1, $JCDiagnostic$Note*, $Name*, $Symbol*, $Void*, $String*, $JCDiagnostic$Fragment*, $JCDiagnostic$Fragment*)},
	{}
};

$InnerClassInfo _CompilerProperties$Notes_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.CompilerProperties$Notes", "com.sun.tools.javac.resources.CompilerProperties", "Notes", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompilerProperties$Notes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.CompilerProperties$Notes",
	"java.lang.Object",
	nullptr,
	_CompilerProperties$Notes_FieldInfo_,
	_CompilerProperties$Notes_MethodInfo_,
	nullptr,
	nullptr,
	_CompilerProperties$Notes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.CompilerProperties"
};

$Object* allocate$CompilerProperties$Notes($Class* clazz) {
	return $of($alloc(CompilerProperties$Notes));
}

$JCDiagnostic$Note* CompilerProperties$Notes::CompressedDiags = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedPlural = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedPluralAdditional = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedRecompile = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::Note = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::PreviewRecompile = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::RemovalPlural = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::RemovalPluralAdditional = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::RemovalRecompile = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedPlural = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedPluralAdditional = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedRecompile = nullptr;

void CompilerProperties$Notes::init$() {
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeferredMethodInst($Symbol* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deferred.method.inst"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilename($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilename($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilename($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilenameAdditional($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilenameAdditional($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilenameAdditional($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::LambdaStat(bool arg0, $Symbol* arg1) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "lambda.stat"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(arg0))),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MethodRefSearchResultsMulti($JCDiagnostic$Fragment* arg0, $String* arg1, int32_t arg2) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "method.ref.search.results.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MrefStat(bool arg0, $Void* arg1) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "mref.stat"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(arg0))),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MrefStat1(bool arg0, $Symbol* arg1) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "mref.stat.1"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(arg0))),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MultipleElements($String* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "multiple.elements"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilename($File* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilename($JavaFileObject* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilename($Path* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilenameAdditional($File* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename.additional"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilenameAdditional($JavaFileObject* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename.additional"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilenameAdditional($Path* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename.additional"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewPlural($Source* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.plural"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewPluralAdditional($Source* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.plural.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::ProcMessager($String* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "proc.messager"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilename($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilename($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilename($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilenameAdditional($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilenameAdditional($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilenameAdditional($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilename($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilename($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilename($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilenameAdditional($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilenameAdditional($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilenameAdditional($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseL2mDeduplicate($Symbol* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.l2m.deduplicate"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $List* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $List* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $List* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $List* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $List* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $List* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

void clinit$CompilerProperties$Notes($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CompilerProperties$Notes::CompressedDiags, $new($JCDiagnostic$Note, "compiler"_s, "compressed.diags"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::DeprecatedPlural, $new($JCDiagnostic$Note, "compiler"_s, "deprecated.plural"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::DeprecatedPluralAdditional, $new($JCDiagnostic$Note, "compiler"_s, "deprecated.plural.additional"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::DeprecatedRecompile, $new($JCDiagnostic$Note, "compiler"_s, "deprecated.recompile"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::Note, $new($JCDiagnostic$Note, "compiler"_s, "note"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::PreviewRecompile, $new($JCDiagnostic$Note, "compiler"_s, "preview.recompile"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::RemovalPlural, $new($JCDiagnostic$Note, "compiler"_s, "removal.plural"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::RemovalPluralAdditional, $new($JCDiagnostic$Note, "compiler"_s, "removal.plural.additional"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::RemovalRecompile, $new($JCDiagnostic$Note, "compiler"_s, "removal.recompile"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::UncheckedPlural, $new($JCDiagnostic$Note, "compiler"_s, "unchecked.plural"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::UncheckedPluralAdditional, $new($JCDiagnostic$Note, "compiler"_s, "unchecked.plural.additional"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::UncheckedRecompile, $new($JCDiagnostic$Note, "compiler"_s, "unchecked.recompile"_s, $$new($ObjectArray, 0)));
}

CompilerProperties$Notes::CompilerProperties$Notes() {
}

$Class* CompilerProperties$Notes::load$($String* name, bool initialize) {
	$loadClass(CompilerProperties$Notes, name, initialize, &_CompilerProperties$Notes_ClassInfo_, clinit$CompilerProperties$Notes, allocate$CompilerProperties$Notes);
	return class$;
}

$Class* CompilerProperties$Notes::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com