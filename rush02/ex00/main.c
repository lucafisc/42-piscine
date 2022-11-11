/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobahram <sobahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:17:12 by sobahram          #+#    #+#             */
/*   Updated: 2022/10/29 21:03:08 by sobahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mrdickshaw.h"
#include "ft_display_str.h"

int	main (int argc, char **argv)
{
	char	*new_source;
	char	*num_input;
	int	entry;
	if	(argc > 3 || argc < 2)
	{
		ft_display_str("Error\n");
		return (0);
	}

	entry = 0;
	char ***dict = (char ***)malloc(sizeof(char **) * 60);
	if (dict != NULL)
	{
		ft_display_str("Memory Created\n");
		while (entry < 50)
		{
			dict[entry] = (char **)malloc(sizeof(char *) * 2);
			dict[entry][0] = (char *)malloc(sizeof(char) * 48);
			dict[entry][1] = (char *)malloc(sizeof(char) * 48);
			entry++;
		}
	}
	else
	{
		ft_display_str("Error Creating Memory! YOU ARE FUCKED.\n");
	}
	//TODO: read the file Dictionary
	ft_fetch_dict(DICTIONARY, dict);

	if (argc == 2)
	{
		num_input = argv[1];
		if (!ft_is_numeric(num_input))
		{
			ft_display_str("Error\n");
			return (0);
		}
		//TODO: Do the conversion
		ft_open_dict(dict, num_input);
	}

	if (argc == 3)
	{
		new_source = argv[1];
		num_input = argv[2];

		if(!ft_is_numeric(new_source) || !ft_is_valid(num_input))
		{
			ft_display_str("Error\n");
			return (0);
		}
	}
	free(dict);
}
