#include <sun/awt/resources/awt_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			u"入力ウィンドウ"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			u"十字カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			u"デフォルトのカーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			u"デフォルトのドラッグ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			u"デフォルトのドロップ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			u"デフォルトのドラッグ禁止カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			u"東方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			u"指型カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			u"システム入力メソッド"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"システムにインストールされている一連のダイナミック・リンク・ライブラリ(DLL)に矛盾があるため、テキスト・ベースの操作が正しく動作しません。この問題の詳細と回避策は、java.sun.com上にあるJava(TM) 2 SDK, Standard Editionのリリース・ノートを参照してください。"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			u"{0}を作成できませんでした。理由: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			u"日本語"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			u"韓国語"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			u"中国語"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			u"中国語(簡体字)"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			u"中国語(繁体字)"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"入力メソッドの選択"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			u"より小さい"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			u"移動カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			u"北東方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			u"北方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			u"北西方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			u"南東方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			u"南方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			u"南西方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			u"テキスト・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			u"西方向のリサイズ・カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			u"待機カーソル"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			u"確定"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NumPad +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			u"再度"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			u"全候補"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			u"英数字"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			"Alt"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			u"Altグラフ"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			u"アンパサンド"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			u"アスタリスク"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			u"アット"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			u"逆引用符"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			u"バックスラッシュ"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Backspace"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			u"開始"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			u"左中カッコ"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			u"右中カッコ"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Caps Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			u"曲折アクセント記号"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			u"クリア"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			u"右大カッコ"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			u"コード入力"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			u"コロン"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			u"カンマ"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			u"作成"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			u"コンテキスト・メニュー"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			u"変換"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			u"コピー"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			u"切取り"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Dead Above Dot"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			"Dead Above Ring"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Dead Acute"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Dead Breve"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Dead Caron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			"Dead Cedilla"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Dead Circumflex"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			"Dead Diaeresis"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Dead Double Acute"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Dead Grave"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Dead Iota"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			"Dead Macron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			"Dead Ogonek"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			"Dead Semivoiced Sound"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Dead Tilde"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			"Dead Voiced Sound"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			"NumPad ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Delete"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			"NumPad /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			u"ドル"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			u"下"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"End"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Enter"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			u"等号"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"Esc"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			u"ユーロ"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			u"感嘆符"_s
		}),
		$$new($ObjectArray, {
			"AWT.f1"_s,
			"F1"_s
		}),
		$$new($ObjectArray, {
			"AWT.f10"_s,
			"F10"_s
		}),
		$$new($ObjectArray, {
			"AWT.f11"_s,
			"F11"_s
		}),
		$$new($ObjectArray, {
			"AWT.f12"_s,
			"F12"_s
		}),
		$$new($ObjectArray, {
			"AWT.f13"_s,
			"F13"_s
		}),
		$$new($ObjectArray, {
			"AWT.f14"_s,
			"F14"_s
		}),
		$$new($ObjectArray, {
			"AWT.f15"_s,
			"F15"_s
		}),
		$$new($ObjectArray, {
			"AWT.f16"_s,
			"F16"_s
		}),
		$$new($ObjectArray, {
			"AWT.f17"_s,
			"F17"_s
		}),
		$$new($ObjectArray, {
			"AWT.f18"_s,
			"F18"_s
		}),
		$$new($ObjectArray, {
			"AWT.f19"_s,
			"F19"_s
		}),
		$$new($ObjectArray, {
			"AWT.f2"_s,
			"F2"_s
		}),
		$$new($ObjectArray, {
			"AWT.f20"_s,
			"F20"_s
		}),
		$$new($ObjectArray, {
			"AWT.f21"_s,
			"F21"_s
		}),
		$$new($ObjectArray, {
			"AWT.f22"_s,
			"F22"_s
		}),
		$$new($ObjectArray, {
			"AWT.f23"_s,
			"F23"_s
		}),
		$$new($ObjectArray, {
			"AWT.f24"_s,
			"F24"_s
		}),
		$$new($ObjectArray, {
			"AWT.f3"_s,
			"F3"_s
		}),
		$$new($ObjectArray, {
			"AWT.f4"_s,
			"F4"_s
		}),
		$$new($ObjectArray, {
			"AWT.f5"_s,
			"F5"_s
		}),
		$$new($ObjectArray, {
			"AWT.f6"_s,
			"F6"_s
		}),
		$$new($ObjectArray, {
			"AWT.f7"_s,
			"F7"_s
		}),
		$$new($ObjectArray, {
			"AWT.f8"_s,
			"F8"_s
		}),
		$$new($ObjectArray, {
			"AWT.f9"_s,
			"F9"_s
		}),
		$$new($ObjectArray, {
			"AWT.final"_s,
			u"最終"_s
		}),
		$$new($ObjectArray, {
			"AWT.find"_s,
			u"検索"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			u"全角"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			u"より大きい"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			u"半角"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			u"ヘルプ"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			u"ひらがな"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Home"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"入力メソッドOn-Off"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Insert"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			u"逆感嘆符"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			u"日本語のひらがな"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			u"日本語のカタカナ"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			u"日本語のローマ字"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			u"かな"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			u"カナ・ロック"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanji"_s,
			u"漢字"_s
		}),
		$$new($ObjectArray, {
			"AWT.katakana"_s,
			u"カタカナ"_s
		}),
		$$new($ObjectArray, {
			"AWT.left"_s,
			u"左"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			u"左丸カッコ"_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			u"メタ"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			u"マイナス"_s
		}),
		$$new($ObjectArray, {
			"AWT.modechange"_s,
			u"モード変更"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NumPad *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			u"無変換"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Num Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			u"番号記号"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			"NumPad"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			u"左大カッコ"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			u"貼付け"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			u"一時停止"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			u"ピリオド"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			"Page Down"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			"Page Up"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			u"プラス"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			u"前候補"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Print Screen"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			u"プロパティ"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			u"引用符"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			u"二重引用符"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			u"右"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			u"右丸カッコ"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			u"ローマ字"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Scroll Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			u"セミコロン"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			"NumPad ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			"NumPad ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			"Shift"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			u"スラッシュ"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			u"スペース"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			u"停止"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			"NumPad -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tab"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			u"未定義"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			u"アンダースコア"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			u"元に戻す"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			u"不明"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			u"上"_s
		}),
		$$new($ObjectArray, {
			"AWT.windows"_s,
			"Windows"_s
		}),
		$$new($ObjectArray, {
			"java.awt.def.delay"_s,
			"30"_s
		}),
		$$new($ObjectArray, {
			"java.awt.im.style"_s,
			u"即座"_s
		})
	});
}

awt_ja::awt_ja() {
}

$Class* awt_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_ja);
	});
	return class$;
}

$Class* awt_ja::class$ = nullptr;

		} // resources
	} // awt
} // sun