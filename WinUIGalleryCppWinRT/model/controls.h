#pragma once

#include <winrt/Microsoft.UI.Xaml.h>
#include <vector>

struct doc_link
{
	winrt::hstring Title;
	winrt::hstring Uri;
};

struct control_info
{
	winrt::hstring UniqueId;
	winrt::hstring Title;
	winrt::hstring ApiNamespace;
	winrt::hstring Subtitle;
	winrt::hstring Description;
	winrt::hstring ImagePath;
	std::vector<doc_link> Docs;
};

struct group_info
{
	winrt::hstring UniqueId;
	winrt::hstring Title;
	winrt::hstring ImagePath;
	std::vector<control_info> Items;
};

std::vector<group_info> groups = {

};
