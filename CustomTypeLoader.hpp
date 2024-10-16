#ifndef CUSTOMTYPELOADER_HPP
#define CUSTOMTYPELOADER_HPP

#include <vector>
#include <string>


//the point of this type is to load type at runtime without compilation, ex if you want to load modded asset into the game without recompiling or adding external libs

typedef enum {
	c,
	uc,
	s,
	us,
	i,
	ui,
	l,
	ul,
	ll,
	ull,
	f,
	lf
} e_data_type;

typedef struct type_return_s {
	void *data;
	e_data_type type;
} type_return_t;

class custom_struct {
	private:
	std::vector<void *> data;
	std::vector<e_data_type> offset;
	unsigned int size;

	public:

	unsigned int get_size(void) {
		return (size);
	}

	type_return_t templateget_data(unsigned int idx) {
		return ((type_return_t){data[i], offset[i]});
	}

	template <typename T>
	bool add_entry(T input) {
		switcH (T) {
			case (char) : {
				break;
			}
			default: break;
		}
	}

};

#endif